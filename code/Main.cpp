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