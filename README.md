# 🌐 Webserv

**Webserv** is a lightweight HTTP server built from scratch in **C++**, developed as part of the **42 Network** curriculum. The goal is to gain a deep understanding of networking, socket programming, HTTP protocol handling, and web server architecture by implementing key parts of a real HTTP server like NGINX or Apache.

---

## 🚀 Project Objectives

- Implement a compliant HTTP/1.1 server using C++ and POSIX sockets
- Support multiple client connections simultaneously
- Handle configuration files, CGI execution, and static file serving
- Explore asynchronous I/O, non-blocking sockets, and event loops
- Learn robust error handling and clean code architecture

---

## 🔧 Features

✅ Serve static files over HTTP  
✅ Handle multiple simultaneous clients (using `poll`)  
✅ Parse and apply custom configuration files (`.conf`)  
✅ Implement CGI scripts (`.py`, `.php`, etc.)  
✅ Support for HTTP methods: `GET`, `POST`, `DELETE`  
✅ Generate auto-index pages for directories  
✅ Custom error pages  
✅ Chunked transfer encoding (optional)  
✅ Object-oriented C++ design

---

## 🛠️ Technologies

- **C++**
- POSIX sockets
- `poll()` for I/O multiplexing
- HTTP/1.1 (RFC 2616)
- CGI protocol
