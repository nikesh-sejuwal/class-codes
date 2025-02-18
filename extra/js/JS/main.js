function hello() {
   const myElement = document.querySelector(".box");
   if (myElement.innerHTML === "<h1>Hellooo</h1>") {
      myElement.innerHTML = "<p>Hellooo</p>";
   } else {
      myElement.innerHTML = "<h1>Hellooo</h1>";
   }
}
