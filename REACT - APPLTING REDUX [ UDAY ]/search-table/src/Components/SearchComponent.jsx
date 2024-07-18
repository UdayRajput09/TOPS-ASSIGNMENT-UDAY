const SearchComponent = ({ query, onSearch }) => {
  return (
    <div className="container text-center">
      <input
        className="form-control w-50"
        type="text"
        value={query}
        onChange={onSearch}
        placeholder="Search..."
      />
    </div>
  );
};

export default SearchComponent;
