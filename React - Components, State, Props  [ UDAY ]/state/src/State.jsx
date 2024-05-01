import React, { useState } from "react";

function State() {
  const [number, setData] = useState(0);
  return (
    <div className="container-sm text-center mt-5 mb-5 pt-5 pb-5">
      <h1 className="text-center text-white fs-1 ">React Web</h1>
      <h1 className="">{number}</h1>
      <button
        className="btn btn-secondary rounded-0 border-black"
        onClick={() => setData(number + 1)}
      >
        Increment
      </button>

      <button
        className=" btn btn-secondary rounded-0 border-black"
        onClick={() => setData(0)}
      >
        Reset
      </button>

      <button
        className="btn btn-secondary rounded-0 border-black"
        onClick={() => {
          if (number > 0) {
            setData(number - 1);
          }
        }}
      >
        Decrement
      </button>
    </div>
  );
}

export default State;
