typedef struct 
{
  u8 pad00[2];
  u8 depth;
  u8 pad03[3];
  u16 center;
  u8 pad08[0x46 - 8];
  u16 radius;
  u8 pad48[0xAC - 0x48];
  u16 centerOffset;
} ProfileActor;
inline int inline_fn(int arg0)
{
  return arg0;
}

void sub_0804DFB8(ProfileActor *actor)
{
  ProfileActor *saved = actor;
  u32 centerOffset = *((volatile u16 *) (&actor->centerOffset));
  u16 right;
  u16 left;
  u16 remaining;
  u32 buffer;
  u32 offset;
  u32 sign;
  right = centerOffset;
  right = right + saved->center;
  left = right;
  remaining = saved->radius;
  buffer = 0x020291C0;
  offset = 0x100;
  sign = 0x8000;
  do
  {
    *((u8 *) ((left + offset) + buffer)) = saved->depth - remaining;
    *((u8 *) (inline_fn(right + offset) + buffer)) = saved->depth - remaining;
    remaining--;
    left--;
    right++;
  }
  while (!(remaining & sign));
}

