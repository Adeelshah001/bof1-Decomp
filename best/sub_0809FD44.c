typedef struct 
{
  u8 flags;
  u8 pad01[0x12];
  u8 volume;
  u8 pad14[0x3C];
} MPlayTrack;
typedef struct 
{
  u8 pad00[8];
  u8 trackCount;
  u8 pad09[0x23];
  MPlayTrack *tracks;
  u32 pad30;
  u32 ident;
} MPlayInfo;
inline u8 inline_fn(MPlayTrack *arg0)
{
  return arg0->flags;
}

void sub_0809FD44(MPlayInfo *player, u16 trackBits, u16 volume)
{
  s32 count;
  s32 bit;
  MPlayTrack *track;
  int new_var;
  u32 flags;
  int new_var2;
  u8 active;
  u8 update;
  u8 activeMask;
  u32 newVolume;
  u8 updateMask;
  if (player->ident == 0x68736D53)
  {
    player->ident++;
    count = player->trackCount;
    track = player->tracks;
    bit = 1;
    if (count > 0)
    {
      activeMask = 0x80;
      newVolume = volume >> 2;
      new_var = 3;
      new_var2 = 1;
      updateMask = new_var;
      do
      {
        if (trackBits & bit)
        {
          flags = inline_fn(track);
          active = activeMask;
          active &= flags;
          if (active)
          {
            track->volume = newVolume;
            update = updateMask;
            update |= flags;
            track->flags = update;
          }
        }
        count--;
        track++;
        bit <<= new_var2;
      }
      while (count > 0);
    }
    player->ident = 0x68736D53;
  }
}

