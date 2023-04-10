CXX = g++
CXXFLAGS = -std=c++11 -Wall -O3
SRC = SimpleGraph_matrix/simplegraph.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = graphProgram

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
