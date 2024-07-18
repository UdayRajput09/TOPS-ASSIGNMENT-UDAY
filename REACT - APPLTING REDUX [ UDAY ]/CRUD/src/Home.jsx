import React from "react";
import Header from "./User/Component/Header";
import Footer from "./User/Component/Footer";

function Home() {
  return (
    <div>
      <div>
        {/* ======= Header/Navbar ======= */}
        <Header />
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
                          <p className="intro-title-top">
                            Doral, Florida
                            <br /> 78345
                          </p>
                          <h1 className="intro-title mb-4 ">
                            <span className="color-b">204 </span> Mount
                            <br /> Olive Road Two
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
          {/* ======= Services Section ======= */}
          <section id="service" className="section-services section-t8">
            <div className="container">
              <div className="row">
                <div className="col-md-12">
                  <div className="title-wrap d-flex justify-content-between">
                    <div className="title-box">
                      <h2 className="title-a">Our Services</h2>
                    </div>
                  </div>
                </div>
              </div>
              <div className="row">
                <div className="col-md-4">
                  <div className="card-box-c foo">
                    <div className="card-header-c d-flex">
                      <div className="card-box-ico">
                        <span className="bi bi-cart" />
                      </div>
                      <div className="card-title-c align-self-center">
                        <h2 className="title-c">Lifestyle</h2>
                      </div>
                    </div>
                    <div className="card-body-c">
                      <p className="content-c">
                        Sed porttitor lectus nibh. Cras ultricies ligula sed
                        magna dictum porta. Praesent sapien massa, convallis a
                        pellentesque nec, egestas non nisi.
                      </p>
                    </div>
                    <div className="card-footer-c">
                      <a href="#" className="link-c link-icon">
                        Read more
                        <span className="bi bi-chevron-right" />
                      </a>
                    </div>
                  </div>
                </div>
                <div className="col-md-4">
                  <div className="card-box-c foo">
                    <div className="card-header-c d-flex">
                      <div className="card-box-ico">
                        <span className="bi bi-calendar4-week" />
                      </div>
                      <div className="card-title-c align-self-center">
                        <h2 className="title-c">Loans</h2>
                      </div>
                    </div>
                    <div className="card-body-c">
                      <p className="content-c">
                        Nulla porttitor accumsan tincidunt. Curabitur aliquet
                        quam id dui posuere blandit. Mauris blandit aliquet
                        elit, eget tincidunt nibh pulvinar a.
                      </p>
                    </div>
                    <div className="card-footer-c">
                      <a href="#" className="link-c link-icon">
                        Read more
                        <span className="bi bi-calendar4-week" />
                      </a>
                    </div>
                  </div>
                </div>
                <div className="col-md-4">
                  <div className="card-box-c foo">
                    <div className="card-header-c d-flex">
                      <div className="card-box-ico">
                        <span className="bi bi-card-checklist" />
                      </div>
                      <div className="card-title-c align-self-center">
                        <h2 className="title-c">Sell</h2>
                      </div>
                    </div>
                    <div className="card-body-c">
                      <p className="content-c">
                        Sed porttitor lectus nibh. Cras ultricies ligula sed
                        magna dictum porta. Praesent sapien massa, convallis a
                        pellentesque nec, egestas non nisi.
                      </p>
                    </div>
                    <div className="card-footer-c">
                      <a href="#" className="link-c link-icon">
                        Read more
                        <span className="bi bi-chevron-right" />
                      </a>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </section>
          {/* End Services Section */}
          {/* ======= Latest Properties Section ======= */}
          <section id="properties" className="section-property section-t8">
            <div className="container">
              <div className="row">
                <div className="col-md-12">
                  <div className="title-wrap d-flex justify-content-between">
                    <div className="title-box">
                      <h2 className="title-a">Latest Properties</h2>
                    </div>
                    <div className="title-link">
                      <a href="property-grid.html">
                        All Property
                        <span className="bi bi-chevron-right" />
                      </a>
                    </div>
                  </div>
                </div>
              </div>
              <div id="property-carousel" className="swiper">
                <div className="swiper-wrapper">
                  <div className="carousel-item-b swiper-slide">
                    <div className="card-box-a card-shadow">
                      <div className="img-box-a">
                        <img
                          src="assets/img/property-6.jpg"
                          alt
                          className="img-a img-fluid"
                        />
                      </div>
                      <div className="card-overlay">
                        <div className="card-overlay-a-content">
                          <div className="card-header-a">
                            <h2 className="card-title-a">
                              <a href="property-single.html">
                                206 Mount
                                <br /> Olive Road Two
                              </a>
                            </h2>
                          </div>
                          <div className="card-body-a">
                            <div className="price-box d-flex">
                              <span className="price-a">rent | $ 12.000</span>
                            </div>
                            <a href="#" className="link-a">
                              Click here to view
                              <span className="bi bi-chevron-right" />
                            </a>
                          </div>
                          <div className="card-footer-a">
                            <ul className="card-info d-flex justify-content-around">
                              <li>
                                <h4 className="card-info-title">Area</h4>
                                <span>
                                  340m
                                  <sup>2</sup>
                                </span>
                              </li>
                              <li>
                                <h4 className="card-info-title">Beds</h4>
                                <span>2</span>
                              </li>
                              <li>
                                <h4 className="card-info-title">Baths</h4>
                                <span>4</span>
                              </li>
                              <li>
                                <h4 className="card-info-title">Garages</h4>
                                <span>1</span>
                              </li>
                            </ul>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                  {/* End carousel item */}
                  <div className="carousel-item-b swiper-slide">
                    <div className="card-box-a card-shadow">
                      <div className="img-box-a">
                        <img
                          src="assets/img/property-3.jpg"
                          alt
                          className="img-a img-fluid"
                        />
                      </div>
                      <div className="card-overlay">
                        <div className="card-overlay-a-content">
                          <div className="card-header-a">
                            <h2 className="card-title-a">
                              <a href="property-single.html">
                                157 West
                                <br /> Central Park
                              </a>
                            </h2>
                          </div>
                          <div className="card-body-a">
                            <div className="price-box d-flex">
                              <span className="price-a">rent | $ 12.000</span>
                            </div>
                            <a href="property-single.html" className="link-a">
                              Click here to view
                              <span className="bi bi-chevron-right" />
                            </a>
                          </div>
                          <div className="card-footer-a">
                            <ul className="card-info d-flex justify-content-around">
                              <li>
                                <h4 className="card-info-title">Area</h4>
                                <span>
                                  340m
                                  <sup>2</sup>
                                </span>
                              </li>
                              <li>
                                <h4 className="card-info-title">Beds</h4>
                                <span>2</span>
                              </li>
                              <li>
                                <h4 className="card-info-title">Baths</h4>
                                <span>4</span>
                              </li>
                              <li>
                                <h4 className="card-info-title">Garages</h4>
                                <span>1</span>
                              </li>
                            </ul>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                  {/* End carousel item */}
                  <div className="carousel-item-b swiper-slide">
                    <div className="card-box-a card-shadow">
                      <div className="img-box-a">
                        <img
                          src="assets/img/property-7.jpg"
                          alt
                          className="img-a img-fluid"
                        />
                      </div>
                      <div className="card-overlay">
                        <div className="card-overlay-a-content">
                          <div className="card-header-a">
                            <h2 className="card-title-a">
                              <a href="property-single.html">
                                245 Azabu
                                <br /> Nishi Park let
                              </a>
                            </h2>
                          </div>
                          <div className="card-body-a">
                            <div className="price-box d-flex">
                              <span className="price-a">rent | $ 12.000</span>
                            </div>
                            <a href="property-single.html" className="link-a">
                              Click here to view
                              <span className="bi bi-chevron-right" />
                            </a>
                          </div>
                          <div className="card-footer-a">
                            <ul className="card-info d-flex justify-content-around">
                              <li>
                                <h4 className="card-info-title">Area</h4>
                                <span>
                                  340m
                                  <sup>2</sup>
                                </span>
                              </li>
                              <li>
                                <h4 className="card-info-title">Beds</h4>
                                <span>2</span>
                              </li>
                              <li>
                                <h4 className="card-info-title">Baths</h4>
                                <span>4</span>
                              </li>
                              <li>
                                <h4 className="card-info-title">Garages</h4>
                                <span>1</span>
                              </li>
                            </ul>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                  {/* End carousel item */}
                  <div className="carousel-item-b swiper-slide">
                    <div className="card-box-a card-shadow">
                      <div className="img-box-a">
                        <img
                          src="assets/img/property-10.jpg"
                          alt
                          className="img-a img-fluid"
                        />
                      </div>
                      <div className="card-overlay">
                        <div className="card-overlay-a-content">
                          <div className="card-header-a">
                            <h2 className="card-title-a">
                              <a href="property-single.html">
                                204 Montal
                                <br /> South Bela Two
                              </a>
                            </h2>
                          </div>
                          <div className="card-body-a">
                            <div className="price-box d-flex">
                              <span className="price-a">rent | $ 12.000</span>
                            </div>
                            <a href="property-single.html" className="link-a">
                              Click here to view
                              <span className="bi bi-chevron-right" />
                            </a>
                          </div>
                          <div className="card-footer-a">
                            <ul className="card-info d-flex justify-content-around">
                              <li>
                                <h4 className="card-info-title">Area</h4>
                                <span>
                                  340m
                                  <sup>2</sup>
                                </span>
                              </li>
                              <li>
                                <h4 className="card-info-title">Beds</h4>
                                <span>2</span>
                              </li>
                              <li>
                                <h4 className="card-info-title">Baths</h4>
                                <span>4</span>
                              </li>
                              <li>
                                <h4 className="card-info-title">Garages</h4>
                                <span>1</span>
                              </li>
                            </ul>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                  {/* End carousel item */}
                </div>
              </div>
              <div className="propery-carousel-pagination carousel-pagination" />
            </div>
          </section>
          {/* End Latest Properties Section */}
          {/* ======= Agents Section ======= */}
          <section id="agents" className="section-agents section-t8">
            <div className="container">
              <div className="row">
                <div className="col-md-12">
                  <div className="title-wrap d-flex justify-content-between">
                    <div className="title-box">
                      <h2 className="title-a">Best Agents</h2>
                    </div>
                    <div className="title-link">
                      <a href="agents-grid.html">
                        All Agents
                        <span className="bi bi-chevron-right" />
                      </a>
                    </div>
                  </div>
                </div>
              </div>
              <div className="row">
                <div className="col-md-4">
                  <div className="card-box-d">
                    <div className="card-img-d">
                      <img
                        src="assets/img/agent-4.jpg"
                        alt
                        className="img-d img-fluid"
                      />
                    </div>
                    <div className="card-overlay card-overlay-hover">
                      <div className="card-header-d">
                        <div className="card-title-d align-self-center">
                          <h3 className="title-d">
                            <a href="agent-single.html" className="link-two">
                              Margaret Sotillo
                              <br /> Escala
                            </a>
                          </h3>
                        </div>
                      </div>
                      <div className="card-body-d">
                        <p className="content-d color-text-a">
                          Sed porttitor lectus nibh, Cras ultricies ligula sed
                          magna dictum porta two.
                        </p>
                        <div className="info-agents color-a">
                          <p>
                            <strong>Phone: </strong> +54 356 945234
                          </p>
                          <p>
                            <strong>Email: </strong> agents@example.com
                          </p>
                        </div>
                      </div>
                      <div className="card-footer-d">
                        <div className="socials-footer d-flex justify-content-center">
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
                <div className="col-md-4">
                  <div className="card-box-d">
                    <div className="card-img-d">
                      <img
                        src="assets/img/agent-1.jpg"
                        alt
                        className="img-d img-fluid"
                      />
                    </div>
                    <div className="card-overlay card-overlay-hover">
                      <div className="card-header-d">
                        <div className="card-title-d align-self-center">
                          <h3 className="title-d">
                            <a href="agent-single.html" className="link-two">
                              Stiven Spilver
                              <br /> Darw
                            </a>
                          </h3>
                        </div>
                      </div>
                      <div className="card-body-d">
                        <p className="content-d color-text-a">
                          Sed porttitor lectus nibh, Cras ultricies ligula sed
                          magna dictum porta two.
                        </p>
                        <div className="info-agents color-a">
                          <p>
                            <strong>Phone: </strong> +54 356 945234
                          </p>
                          <p>
                            <strong>Email: </strong> agents@example.com
                          </p>
                        </div>
                      </div>
                      <div className="card-footer-d">
                        <div className="socials-footer d-flex justify-content-center">
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
                <div className="col-md-4">
                  <div className="card-box-d">
                    <div className="card-img-d">
                      <img
                        src="assets/img/agent-5.jpg"
                        alt
                        className="img-d img-fluid"
                      />
                    </div>
                    <div className="card-overlay card-overlay-hover">
                      <div className="card-header-d">
                        <div className="card-title-d align-self-center">
                          <h3 className="title-d">
                            <a href="agent-single.html" className="link-two">
                              Emma Toledo
                              <br /> Cascada
                            </a>
                          </h3>
                        </div>
                      </div>
                      <div className="card-body-d">
                        <p className="content-d color-text-a">
                          Sed porttitor lectus nibh, Cras ultricies ligula sed
                          magna dictum porta two.
                        </p>
                        <div className="info-agents color-a">
                          <p>
                            <strong>Phone: </strong> +54 356 945234
                          </p>
                          <p>
                            <strong>Email: </strong> agents@example.com
                          </p>
                        </div>
                      </div>
                      <div className="card-footer-d">
                        <div className="socials-footer d-flex justify-content-center">
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
          </section>
          {/* End Agents Section */}

          {/* Contact us  */}
          <section className="contact">
            <div className="container">
              <div className="row">
                <div className="col-sm-12 section-t8">
                  <div className="title-wrap d-flex justify-content-between">
                    <div className="title-box">
                      <h2 className="title-a">Contact us</h2>
                    </div>
                  </div>
                  <div className="row">
                    <div className="col-md-7">
                      <form
                        action="forms/contact.php"
                        method="post"
                        role="form"
                        className="php-email-form"
                      >
                        <div className="row">
                          <div className="col-md-6 mb-3">
                            <div className="form-group">
                              <input
                                type="text"
                                name="name"
                                className="form-control form-control-lg form-control-a"
                                placeholder="Your Name"
                                required
                              />
                            </div>
                          </div>
                          <div className="col-md-6 mb-3">
                            <div className="form-group">
                              <input
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
                                type="text"
                                name="subject"
                                className="form-control form-control-lg form-control-a"
                                placeholder="Subject"
                                required
                              />
                            </div>
                          </div>
                          <div className="col-md-12">
                            <div className="form-group">
                              <textarea
                                name="message"
                                className="form-control"
                                cols={45}
                                rows={8}
                                placeholder="Message"
                                required
                                defaultValue={""}
                              />
                            </div>
                          </div>
                          <div className="col-md-12 my-3">
                            <div className="mb-3">
                              <div className="loading">Loading</div>
                              <div className="error-message" />
                              <div className="sent-message">
                                Your message has been sent. Thank you!
                              </div>
                            </div>
                          </div>
                          <div className="col-md-12 text-center">
                            <button type="submit" className="btn btn-a">
                              Send Message
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
                              <span className="color-a">
                                contact@example.com
                              </span>
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
        </main>
        {/* End #main */}
        <Footer />
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

export default Home;
