// Class
class Hello {
  // constructor in js
  constructor() {
    console.log("Hello form constructor");
  }
  //   Prototype
  message() {
    console.log("Hello from message");
  }
  sum(a, b) {
    console.log(a + b, "from sum");
  }

  //   static method
  static name(name) {
    console.log(name);
  }
}
// creating obj
var h = new Hello();
h.message();
h.sum(10, 20);
Hello.name("Hello form static method");
