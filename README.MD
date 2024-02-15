# DataFile Serializer/Deserializer
C++17 Saving and loading stuff on a human readable format.

### Writting Usage
```cpp
#include "Serializer.h"

int main(int argc, char* argv[])
{
    Cosmos::DataFile df;
    df["Entity"];
    df["Entity"]["name"].SetString("Example");
    df["Entity"]["id"].SetInt(99);

    auto& a = df["Entity"]["transform"];
    a["translation"].SetDouble(90.0, 0);
    a["translation"].SetDouble(45.0, 1);
    a["translation"].SetDouble(321.0, 2);
    a["rotation"].SetDouble(25.0, 0);
    a["rotation"].SetDouble(43.0, 1);
    a["rotation"].SetDouble(33.0, 2);
    a["scale"].SetDouble(0.5, 0);
    a["scale"].SetDouble(123.0, 1);
    a["scale"].SetDouble(43.0, 2);

    Cosmos::DataFile::Write(df, "TestOutput.txt");

    return 0;
}
```

### Outputs to a file
```bash

Entity
{
	name = Example
	id = 99

	transform
	{
		translation = 90.000000, 45.000000, 321.000000
		rotation = 25.000000, 43.000000, 33.000000
		scale = 0.500000, 123.000000, 43.000000
	}

}
```
### Reading Usage

```cpp
Cosmos::DataFile df2;
Cosmos::DataFile::Read(df, "TestOutput.txt");
```

A more complex example of the usage: 
[Cosmos Engine Save/Load system](https://github.com/franzpedd/Engine/blob/main/Engine/Source/Core/Scene.cpp)

### Instalation
Include both Serializer.h and Serlaizer.cpp to your project.


### Credits to [Javidx9](https://github.com/OneLoneCoder)
