import React from "react";
import { NavLink } from "react-router-dom";

function AdminHeader() {
  return (
    <div>
      <nav className="navbar navbar-default navbar-trans navbar-expand-lg fixed-top">
        <div className="container">
          <button
            className="navbar-toggler collapsed"
            type="button"
            data-bs-toggle="collapse"
            data-bs-target="#navbarDefault"
            aria-controls="navbarDefault"
            aria-expanded="false"
            aria-label="Toggle navigation"
          >
            <span />
            <span />
            <span />
          </button>
          <NavLink className="navbar-brand text-brand" to="/">
            Estate<span className="color-b">Agency</span>
          </NavLink>
          <div
            className="navbar-collapse collapse justify-content-center"
            id="navbarDefault"
          >
            <ul className="navbar-nav">
              <li className="nav-item">
                <NavLink className="nav-link active" to="/admin">
                  Home
                </NavLink>
              </li>
              <li className="nav-item">
                <a className="nav-link " href="#service">
                  Service
                </a>
              </li>
              <li className="nav-item">
                <a className="nav-link " href="#properties">
                  Property
                </a>
              </li>
              <li className="nav-item">
                <a className="nav-link " href="#agents">
                  Agents
                </a>
              </li>

              <li className="nav-item">
                <a className="nav-link " href="contact.html">
                  Contact
                </a>
              </li>
              <li className="nav-item">
                <a className="nav-link " href="#manageuser">
                  Manage-user
                </a>
              </li>
              <li className="nav-item">
                <NavLink className="nav-link " to="/alogin">
                  Login
                </NavLink>
              </li>
            </ul>
          </div>
        </div>
      </nav>
    </div>
  );
}

export default AdminHeader;
