protobufCompiler\protoc.exe --proto_path="%cd%\proto" --proto_path="%cd%\protobufCompiler" --cpp_out="%cd%\generated\cpp\include" --csharp_out="%cd%\generated\csharp" "%cd%\proto\particle.proto"