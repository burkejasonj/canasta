#include "include/Application.hpp"

int main(int argc, char **argv) {
  Json::Value configRoot;
  std::ifstream gameConfig("../data/default/canasta/BaseGameStorage.json",
                           std::ifstream::binary);

  gameConfig >> configRoot;

  int ServerID = configRoot["Game"]["Settings"].get("ServerID", -1).asInt();

  printf("ServerID: %i\n", ServerID);

  gameConfig.close();
  return 0;
}
