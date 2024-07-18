const initialState = {
  products: [
    { name: "Allen Solly", price: 999, category: "Fashion" },
    { name: " Fabindia", price: 999, category: "Fashion" },
    { name: " Levi’s", price: 999, category: "Fashion" },
    { name: "H&M", price: 999, category: "Fashion" },
    { name: "Calvin Klein", price: 999, category: "Fashion" },
    { name: " Peter England", price: 999, category: "Fashion" },
    { name: "Adidas ", price: 999, category: "Fashion" },
    { name: " Gucci ", price: 999, category: "Fashion" },
    { name: "  Louis Philippe ", price: 999, category: "Fashion" },
    { name: " Raymond ", price: 999, category: "Fashion" },
    { name: " Zara ", price: 999, category: "Fashion" },
    { name: "  A’ND ", price: 999, category: "Fashion" },
  ],
};

const rootReducer = (state = initialState, action) => {
  switch (action.type) {
    case "SET_PRODUCTS":
      return { ...state, products: action.payload };
    case "DELETE_PRODUCT":
      const updatedProducts = state.products.filter(
        (product, index) => index !== action.payload
      );
      return { ...state, products: updatedProducts };
    default:
      return state;
  }
};

export default rootReducer;
