#ifndef WIN32
#include <endian.h>
#else
#include "ur_modern_driver/portable_endian.h"
#endif
#include "ur_modern_driver/bin_parser.h"

uint16_t BinParser::decode(uint16_t val)
{
    return be16toh(val);
}
uint32_t BinParser::decode(uint32_t val)
{
    return be32toh(val);
}
uint64_t BinParser::decode(uint64_t val)
{
    return be64toh(val);
}
int16_t BinParser::decode(int16_t val)
{
    return be16toh(val);
}
int32_t BinParser::decode(int32_t val)
{
    return be32toh(val);
}
int64_t BinParser::decode(int64_t val)
{
    return be64toh(val);
}