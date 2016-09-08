
#include <crow.h>

#include "http_sercer.hpp"

namespace http {
  void server() {
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        return "Root";
    });

    app.port(8080).multithreaded().run();
  }
}  // namespace http