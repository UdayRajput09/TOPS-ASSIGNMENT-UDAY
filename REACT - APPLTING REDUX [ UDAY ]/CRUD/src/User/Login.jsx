import React, { useState, useEffect } from "react";
import Header from "./Component/Header";
import { NavLink, useNavigate } from "react-router-dom";
import { login } from "../Features/Userdetails";
import { useDispatch, useSelector } from "react-redux";
import { toast } from "react-toastify";

function Login() {
  const [email, setEmail] = useState("");
  const [password, setPassword] = useState("");
  const dispatch = useDispatch();
  const navigate = useNavigate();

  const { error, currentUser } = useSelector((state) => state.user);

  const handleLogin = (e) => {
    e.preventDefault();
    dispatch(login({ email, password }))
      .unwrap()
      .then(() => {
        console.log("Login successful!");
        navigate("/"); // Navigate to home or dashboard after login
      })
      .catch((err) => {
        console.error("Login failed:", err);
        toast.error("Login failed!");
      });
  };

  useEffect(() => {
    if (error) {
      toast.error(error);
    }
  }, [error]);

  return (
    <div>
      <Header />
      <section className="contact mt-5">
        <div className="container">
          <div className="row">
            <div className="col-sm-12 section-t8">
              <div className="row">
                <div className="title-wrap d-flex justify-content-between">
                  <div className="title-box">
                    <h2 className="title-a">Login.</h2>
                  </div>
                </div>
                <div className="col-md-7">
                  <form onSubmit={handleLogin} className="php-email-form">
                    <div className="row">
                      <div className="col-md-12 mb-3"></div>
                      <div className="col-md-12 mb-3">
                        <div className="form-group">
                          <input
                            value={email}
                            onChange={(e) => setEmail(e.target.value)}
                            name="email"
                            type="email"
                            className="form-control form-control-lg form-control-a"
                            placeholder="Your Email"
                            required
                          />
                        </div>
                      </div>
                      <div className="col-md-12 mb-3">
                        <div className="form-group">
                          <input
                            value={password}
                            onChange={(e) => setPassword(e.target.value)}
                            type="password"
                            name="password"
                            className="form-control form-control-lg form-control-a"
                            placeholder="Password"
                            required
                          />
                        </div>
                      </div>
                      <div className="col-md-12 text-center my-5">
                        <NavLink to="/register" className="btn btn-a">
                          Register
                        </NavLink>
                      </div>
                      <div className="col-md-12 text-center">
                        <button type="submit" className="btn btn-a">
                          Login
                        </button>
                      </div>
                    </div>
                  </form>
                </div>
                <div className="col-md-5 section-md-t3">
                  <div className="icon-box section-b2">
                    <div className="icon-box-icon">
                      <span className="bi bi-envelope" />
                    </div>
                    <div className="icon-box-content table-cell">
                      <div className="icon-box-title">
                        <h4 className="icon-title">Say Hello</h4>
                      </div>
                      <div className="icon-box-content">
                        <p className="mb-1">
                          Email.
                          <span className="color-a">contact@example.com</span>
                        </p>
                        <p className="mb-1">
                          Phone.
                          <span className="color-a">+54 356 945234</span>
                        </p>
                      </div>
                    </div>
                  </div>
                  <div className="icon-box section-b2">
                    <div className="icon-box-icon">
                      <span className="bi bi-geo-alt" />
                    </div>
                    <div className="icon-box-content table-cell">
                      <div className="icon-box-title">
                        <h4 className="icon-title">Find us in</h4>
                      </div>
                      <div className="icon-box-content">
                        <p className="mb-1">
                          Manhattan, Nueva York 10036,
                          <br /> EE. UU.
                        </p>
                      </div>
                    </div>
                  </div>
                  <div className="icon-box">
                    <div className="icon-box-icon">
                      <span className="bi bi-share" />
                    </div>
                    <div className="icon-box-content table-cell">
                      <div className="icon-box-title">
                        <h4 className="icon-title">Social networks</h4>
                      </div>
                      <div className="icon-box-content">
                        <div className="socials-footer">
                          <ul className="list-inline">
                            <li className="list-inline-item">
                              <a href="#" className="link-one">
                                <i className="bi bi-facebook" />
                              </a>
                            </li>
                            <li className="list-inline-item">
                              <a href="#" className="link-one">
                                <i className="bi bi-twitter" />
                              </a>
                            </li>
                            <li className="list-inline-item">
                              <a href="#" className="link-one">
                                <i className="bi bi-instagram" />
                              </a>
                            </li>
                            <li className="list-inline-item">
                              <a href="#" className="link-one">
                                <i className="bi bi-linkedin" />
                              </a>
                            </li>
                          </ul>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </section>
    </div>
  );
}

export default Login;
