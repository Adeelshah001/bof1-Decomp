typedef struct 
{
  u32 kind;
  u32 sign;
  s32 exponent;
  u32 fraction;
} FloatParts;
void sub_080A5908(const u32 *src, FloatParts *dst)
{
  u32 bits = *src;
  u32 exponent = bits << 9;
  u32 fraction = exponent >> 9;
  exponent = (bits << 1) >> 24;
  dst->sign = bits >> 31;
  if (exponent == 0)
  {
    if (fraction == 0)
    {
      dst->kind = 2;
    }
    else
    {
      dst->exponent = exponent - 126;
      fraction <<= 7;
      dst->kind = 3;
      if (fraction <= 0x3FFFFFFF)
      {
        s32 exp = dst->exponent;
        do
        {
          fraction <<= 1;
          exp--;
        }
        while (fraction <= 0x3FFFFFFF);
        dst->exponent = exp;
      }
      dst->fraction = fraction;
    }
  }
  else
    if (exponent == 255)
  {
    if (0 == fraction)
    {
      dst->kind = 4;
    }
    else
    {
      u32 kind = fraction & 0x100000;
      if (kind != 0)
      {
        kind = 1;
      }
      dst->kind = kind;
      dst->fraction = fraction;
    }
  }
  else
  {
    dst->exponent = exponent - 127;
    dst->kind = 3;
    dst->fraction = (fraction << 7) | 0x40000000;
  }
}

