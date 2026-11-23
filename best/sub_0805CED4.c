extern u8 D_0300169C;
extern u16 D_0202DDD4[];
u8 sub_08001770(u16);
inline s32 inline_fn(s32 arg0)
{
  return arg0;
}

s32 sub_0805CED4(void)
{
  volatile u16 entry;
  u16 index;
  s32 count = 0;
  s32 remaining;
  s32 limit;
  s32 size;
  if (D_0300169C == 0)
  {
    index = 0;
    limit = 0x30;
    if (sub_08001770(0))
    {
      limit = 0x40;
    }
    size = limit;
    remaining = inline_fn(size);
    if (count < remaining)
    {
      u16 *entries;
      u32 mask;
      limit = (s32) (&entry);
      entries = D_0202DDD4;
      mask = 0xF00;
      remaining = size;
      do
      {
        s32 empty = 1;
        u32 flags = mask;
        if ((flags &= (*((volatile u16 *) limit) = entries[index])) != 0)
        {
          empty = 0;
        }
        if (empty)
        {
          count++;
        }
        index++;
        remaining--;
      }
      while (remaining != 0);
    }
  }
  return count;
}

