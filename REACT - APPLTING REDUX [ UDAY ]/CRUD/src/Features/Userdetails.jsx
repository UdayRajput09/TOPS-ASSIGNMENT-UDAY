import { createAsyncThunk, createSlice } from "@reduxjs/toolkit";
import axios from "axios";

const BASE_URL = "http://localhost:3000/user";
console.log(BASE_URL);

export const login = createAsyncThunk(
  "user/login",
  async ({ email, password }, { rejectWithValue }) => {
    try {
      const storedUser = localStorage.getItem("currentUser");
      if (storedUser) {
        const parsedUser = JSON.parse(storedUser);
        if (parsedUser.email === email && parsedUser.password === password) {
          return parsedUser;
        }
      }

      const response = await axios.get(BASE_URL);
      const users = response.data;
      const user = users.find(
        (user) => user.email === email && user.password === password
      );

      if (!user) {
        return rejectWithValue("User not found, kindly register first.");
      }

      localStorage.setItem("currentUser", JSON.stringify(user));
      return user;
    } catch (error) {
      console.error("Login API Error:", error);
      return rejectWithValue(error.message);
    }
  }
);

export const showuser = createAsyncThunk(
  "showuser",
  async (argu, { rejectWithValue }) => {
    try {
      const res = await axios.get(BASE_URL);
      const respons = res.data;
      return respons;
    } catch (error) {
      return rejectWithValue(error);
    }
  }
);

// Define and export createUser if it is a part of your logic
export const createUser = createAsyncThunk(
  "user/createUser",
  async (userData, { rejectWithValue }) => {
    try {
      const response = await axios.post(BASE_URL, userData);
      return response.data;
    } catch (error) {
      return rejectWithValue(error.response.data);
    }
  }
);

const userdetails = createSlice({
  name: "users",
  initialState: {
    user: [],
    loading: false,
    error: null,
  },
  reducers: {
    userpending: (state) => {
      state.loading = true;
    },
    userfullfield: (state, action) => {
      state.loading = false;
      state.user.push(action.payload);
    },
    userrejected: (state, action) => {
      state.loading = false;
      state.error = action.payload;
    },
  },
  extraReducers: (builder) => {
    builder
      .addCase(showuser.pending, (state) => {
        state.loading = true;
      })
      .addCase(showuser.fulfilled, (state, action) => {
        state.loading = false;
        state.user = action.payload;
      })
      .addCase(showuser.rejected, (state, action) => {
        state.loading = false;
        state.error = action.payload;
      })
      .addCase(createUser.pending, (state) => {
        state.loading = true;
        state.error = null;
      })
      .addCase(createUser.fulfilled, (state, action) => {
        state.loading = false;
        state.userInfo = action.payload;
      })
      .addCase(createUser.rejected, (state, action) => {
        state.loading = false;
        state.error = action.payload;
      });
  },
});

export const { userpending, userfullfield, userrejected } = userdetails.actions;

export default userdetails.reducer;
