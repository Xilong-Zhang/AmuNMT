#pragma once

#include <cstdlib>
#include <cstdint>
#include <vector>
#include <iostream>

namespace amunmt {

typedef size_t Word;
typedef std::vector<Word> Words;

const Word EOS_ID = 0;
const Word UNK_ID = 1;

const std::string EOS_STR = "</s>";
const std::string UNK_STR = "<unk>";

enum DeviceType
{
	CPUDevice = 7,
	GPUDevice = 11
};

struct DeviceInfo
{
  friend std::ostream& operator<<(std::ostream& out, const DeviceInfo& obj);

  DeviceType deviceType;
  size_t threadInd;
  size_t deviceId;
};

}

