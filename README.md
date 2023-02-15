<h1 align="center">Luxray</h1>
<p align="center">
  A C++ wrapper for Raylib called Luxray, created for an Epitech Project.
</p>

<p align="center">
  <img src="https://i.pinimg.com/originals/6d/db/41/6ddb4145a7a1bc3ff3cd5c6bf7ee9097.jpg" width="350" title="Luxray for Lux and Raylib :o">
</p>

<p align="center">
  Raylib: https://www.raylib.com/index.html
</p>

<p align="center">
  A more efficient and complet wrap of Raylib in C++: https://github.com/RobLoach/raylib-cpp
</p>

<p align="center">
  Donate to the creator of Raylib: https://github.com/sponsors/raysan5
</p>
<br>

<h2 align="center">Goal and functionalities</h2>

<p align="center">
This project is a very summary and incomplete implementation, its only purpose was to be used during a video game creation project (Bomberman project).
His main interest is to create a wrap adding object oriented features, to write better and faster code and also, at this time, to familiarize myself with the wrap concept.
</p>
<p align="center">There are also a few "todo" scattered around, the project was stopped during development anyway, the goal was already more than fulfilled and this wrapper was starting to become a bit overkill.</p>


<p>A small list of additions that this wrap brings to the library :

- Obviously each "objects" has now its own class, his attributes and corresponding methods.
- As part of the first point getter and setter functions are the only way to access data.
- Also because of the first point, destructors now unload objects.
- The method chaining has been implemented on a large number of functions.
- Some types were changed to available alternatives in C++. (example: char * -> std::string, char ** -> string vectors).
- "All-in-one" functions have been created, such as the draw function that starts and stops the drawing mode and executes a lambda function in between.
- Functions names are now camelCase and named with a more "object-oriented" name (i.e. avoiding repeating the object name corresponding to the method in each name).
- Some functions have now optional parameters with default values
</p>
