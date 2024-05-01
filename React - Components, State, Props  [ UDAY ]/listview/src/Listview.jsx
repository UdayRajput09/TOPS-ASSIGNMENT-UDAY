import React from "react";

function Fruits(props) {
  return <li className=" mt-3">{props.name}</li>;
}

function Listview() {
  const fruits = ["Apple", "Banana", "Mango", "Orange"];

  return (
    <div className=" container-sm bg-primary text-white  my-5 py-5  ms-5 rounded-4">
      <h1>The "React way" to render a list.</h1>
      <ul>
        {fruits.map((fruit, index) => (
          <Fruits key={index} name={fruit} />
        ))}
      </ul>
    </div>
  );
}

export default Listview;
