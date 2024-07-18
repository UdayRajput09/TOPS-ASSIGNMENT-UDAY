import React, { useState } from "react";
import Header from "./Component/Header";
import { toast } from "react-toastify";
import { useNavigate } from "react-router-dom";
import { useDispatch } from "react-redux";
import { createUser } from "../Features/Userdetails";

function Register() {
  const redirect = useNavigate();

  const [user, setuser] = useState({
    profile: "",
    name: "",
    email: "",
    password: "",
    cpassword: "",
    status: "unblock",
  });

  const dispatch = useDispatch();

  const getChange = (e) => {
    setuser({
      ...user,
      [e.target.name]: e.target.value,
    });
  };

  const handleSubmit = (e) => {
    e.preventDefault();
    if (user.password !== user.cpassword) {
      toast.error("Passwords do not match!");
      return;
    }
    dispatch(createUser(user))
      .unwrap()
      .then((registeredUser) => {
        // Store user details in local storage
        localStorage.setItem("currentUser", JSON.stringify(registeredUser));

        setuser({
          profile: "",
          name: "",
          email: "",
          password: "",
          cpassword: "",
          status: "unblock",
        });
        toast.success("User registered successfully!");
        redirect("/login"); // Redirect to the login page after successful registration
      })
      .catch((err) => {
        console.error("Registration failed:", err);
        toast.error("Registration failed!");
      });
  };

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
                    <h2 className="title-a">Register</h2>
                  </div>
                </div>
                <div className="col-md-7">
                  <form
                    onSubmit={handleSubmit}
                    method="post"
                    role="form"
                    className="php-email-form"
                  >
                    <div className="row">
                      <div className="col-md-6 mb-3">
                        <div className="form-group">
                          <input
                            onChange={getChange}
                            type="text"
                            name="name"
                            className="form-control form-control-lg form-control-a"
                            placeholder="Your Name"
                            value={user.name}
                            required
                          />
                        </div>
                      </div>
                      <div className="col-md-6 mb-3">
                        <div className="form-group">
                          <input
                            onChange={getChange}
                            name="email"
                            type="email"
                            className="form-control form-control-lg form-control-a"
                            placeholder="Your Email"
                            value={user.email}
                            required
                          />
                        </div>
                      </div>
                      <div className="col-md-12 mb-3">
                        <div className="form-group">
                          <input
                            onChange={getChange}
                            type="password"
                            name="password"
                            className="form-control form-control-lg form-control-a"
                            placeholder="Password"
                            value={user.password}
                            required
                          />
                        </div>
                      </div>
                      <div className="col-md-12 mb-3">
                        <div className="form-group">
                          <input
                            onChange={getChange}
                            type="password"
                            name="cpassword"
                            className="form-control form-control-lg form-control-a"
                            placeholder="Confirm Password"
                            value={user.cpassword}
                            required
                          />
                        </div>
                      </div>
                      <div className="col-md-12 mb-3">
                        <div className="form-group">
                          <input
                            onChange={getChange}
                            type="tel"
                            name="mobile"
                            className="form-control form-control-lg form-control-a"
                            placeholder="Mobile No"
                            value={user.mobile}
                            required
                          />
                        </div>
                      </div>
                      <div className="col-md-12 text-center">
                        <button type="submit" className="btn btn-a">
                          Register
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
                          Email:
                          <span className="color-a">contact@example.com</span>
                        </p>
                        <p className="mb-1">
                          Phone:
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
                                <i
                                  className="bi bi-facebook"
                                  aria-hidden="true"
                                />
                              </a>
                            </li>
                            <li className="list-inline-item">
                              <a href="#" className="link-one">
                                <i
                                  className="bi bi-twitter"
                                  aria-hidden="true"
                                />
                              </a>
                            </li>
                            <li className="list-inline-item">
                              <a href="#" className="link-one">
                                <i
                                  className="bi bi-instagram"
                                  aria-hidden="true"
                                />
                              </a>
                            </li>
                            <li className="list-inline-item">
                              <a href="#" className="link-one">
                                <i
                                  className="bi bi-linkedin"
                                  aria-hidden="true"
                                />
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

export default Register;
