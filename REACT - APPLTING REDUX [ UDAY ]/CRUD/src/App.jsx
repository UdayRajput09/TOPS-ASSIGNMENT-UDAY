import { useState } from "react";
import Home from "./Home";
import { BrowserRouter, Route, Routes } from "react-router-dom";
import Register from "./User/Register";
import Login from "./User/Login";
import AdminHome from "./admin/AdminHome";

function App() {
  const [count, setCount] = useState(0);

  return (
    <>
      {/* user side  */}
      <BrowserRouter>
        <Routes>
          <Route
            path="/"
            element={
              <>
                <Home />
              </>
            }
          />
          <Route
            path="/register"
            element={
              <>
                <Register></Register>
              </>
            }
          />
          <Route
            path="/login"
            element={
              <>
                <Login></Login>
              </>
            }
          />

          {/* admin  */}
          <Route
            path="/admin"
            element={
              <>
                <AdminHome />
              </>
            }
          />
        </Routes>
      </BrowserRouter>
    </>
  );
}

export default App;
