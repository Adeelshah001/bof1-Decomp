typedef union 
{
  u64 value;
  struct 
  {
    u32 low;
    u32 high;
  } words;
} DoubleWord;
u64 sub_080A61D0(u64 a, u64 b)
{
  DoubleWord left;
  DoubleWord right;
  DoubleWord result;
  DoubleWord product;
  u32 x;
  u32 y;
  u32 aLow;
  u32 aHigh;
  u32 bLow;
  u32 bHigh;
  u32 low;
  u32 middle;
  u32 cross;
  u32 high;
  left.value = a;
  right.value = b;
  x = left.words.low;
 do { aLow = x; aLow &= 0xFFFF; aHigh = x >> 16; y = right.words.low; bLow = y; bLow &= 0xFFFF; bHigh = y >> 16; low = aLow * bLow; middle = aLow * bHigh; } while (0);
  cross = aHigh * bLow;
  high = aHigh * bHigh;
  middle += low >> 16;
  middle += cross;
  if (middle < cross)
  {
    high += 0x10000;
  }
  result.words.high = high + (middle >> 16);
  result.words.low = ((middle & 0xFFFF) << 16) | (low & 0xFFFF);
  product.value = result.value;
  product.words.high += (left.words.low * right.words.high) + (left.words.high * right.words.low);
  return product.value;
}
