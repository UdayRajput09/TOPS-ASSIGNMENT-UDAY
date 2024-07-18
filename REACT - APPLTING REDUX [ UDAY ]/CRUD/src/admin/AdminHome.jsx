import React, { useEffect } from "react";
import AdminHeader from "./Components/AdminHeader";
import AdminFooter from "./Components/AdminFooter";
import { useDispatch, useSelector } from "react-redux";
import { showuser } from "../Features/Userdetails";

function AdminHome() {
  const dispatch = useDispatch();

  // Manage-user
  const { user, loading } = useSelector((state) => state.user);

  useEffect(() => {
    dispatch(showuser());
  }, [dispatch]);

  return (
    <div>
      <div>
        {/* ======= Header/Navbar ======= */}
        <AdminHeader />

        {/* End Header/Navbar */}
        {/* ======= Intro Section ======= */}
        <div className="intro intro-carousel swiper position-relative">
          <div className="swiper-wrapper">
            <div
              className="swiper-slide carousel-item-a intro-item bg-image"
              style={{ backgroundImage: "url(assets/img/slide-1.jpg)" }}
            >
              <div className="overlay overlay-a" />
              <div className="intro-content display-table">
                <div className="table-cell">
                  <div className="container">
                    <div className="row">
                      <div className="col-lg-8">
                        <div className="intro-body">
                          <h1 className="intro-title mb-4 ">
                            <span className="color-b">Welcome </span>
                            <br /> Admin
                          </h1>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
            <div
              className="swiper-slide carousel-item-a intro-item bg-image"
              style={{ backgroundImage: "url(assets/img/slide-2.jpg)" }}
            >
              <div className="overlay overlay-a" />
              <div className="intro-content display-table">
                <div className="table-cell">
                  <div className="container">
                    <div className="row">
                      <div className="col-lg-8">
                        <div className="intro-body">
                          <p className="intro-title-top">
                            Doral, Florida
                            <br /> 78345
                          </p>
                          <h1 className="intro-title mb-4">
                            <span className="color-b">204 </span> Rino
                            <br /> Venda Road Five
                          </h1>
                          <p className="intro-subtitle intro-price">
                            <a href="#">
                              <span className="price-a">rent | $ 12.000</span>
                            </a>
                          </p>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
            <div
              className="swiper-slide carousel-item-a intro-item bg-image"
              style={{ backgroundImage: "url(assets/img/slide-3.jpg)" }}
            >
              <div className="overlay overlay-a" />
              <div className="intro-content display-table">
                <div className="table-cell">
                  <div className="container">
                    <div className="row">
                      <div className="col-lg-8">
                        <div className="intro-body">
                          <p className="intro-title-top">
                            Doral, Florida
                            <br /> 78345
                          </p>
                          <h1 className="intro-title mb-4">
                            <span className="color-b">204 </span> Alira
                            <br /> Roan Road One
                          </h1>
                          <p className="intro-subtitle intro-price">
                            <a href="#">
                              <span className="price-a">rent | $ 12.000</span>
                            </a>
                          </p>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
          <div className="swiper-pagination" />
        </div>
        {/* End Intro Section */}
        <main id="main">
          {/* Manage-user  */}
          <section id="manageuser" className=" mt-5">
            <div class="container mt-3">
              <div className="title-wrap d-flex justify-content-between">
                <div className="title-box">
                  <h2 className="title-a">Manage-User</h2>
                </div>
              </div>
              <table class="table table-striped">
                <thead>
                  <tr>
                    <th>Id</th>
                    <th>Name</th>
                    <th>Email</th>
                    <th>Password</th>
                    <th>Action</th>
                  </tr>
                </thead>
                <tbody>
                  {user &&
                    user.map((value) => {
                      return (
                        <tr>
                          <td>{value.id}</td>
                          <td>{value.name}</td>
                          <td>{value.email}</td>
                          <td>{value.password}</td>
                          <td>
                            <button className=" btn btn-primary  me-5 px-4">
                              Edit
                            </button>
                            <button className=" btn btn-danger">Delete</button>
                          </td>
                        </tr>
                      );
                    })}
                </tbody>
              </table>
            </div>
          </section>
        </main>

        {/* End #main */}
        <AdminFooter />
        <a
          href="#"
          className="back-to-top d-flex align-items-center justify-content-center"
        >
          <i className="bi bi-arrow-up-short" />
        </a>
        {/* Vendor JS Files */}
        {/* Template Main JS File */}
      </div>
    </div>
  );
}

export default AdminHome;
