import { useSelector } from "react-redux";
import { useState } from "react";
import SearchComponent from "./Components/SearchComponent";
import TableComponent from "./Components/TableComponent";

const App = () => {
  const [query, setQuery] = useState("");
  const products = useSelector((state) => state.products);

  const handleSearch = (e) => {
    setQuery(e.target.value);
  };

  const filteredProducts = products.filter((product) =>
    product.name.toLowerCase().includes(query.toLowerCase())
  );

  return (
    <div>
      <div className="container mt-5">
        <h1 className="">Search products:Shirt {query}</h1>
        <SearchComponent query={query} onSearch={handleSearch} />
        <TableComponent products={filteredProducts} />
      </div>
    </div>
  );
};

export default App;
