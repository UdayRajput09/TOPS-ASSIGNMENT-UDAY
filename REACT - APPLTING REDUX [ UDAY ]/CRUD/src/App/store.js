import { configureStore } from "@reduxjs/toolkit";
import userdetails from "../Features/Userdetails";

export default configureStore({
  reducer: {
    user: userdetails,
  },
});
