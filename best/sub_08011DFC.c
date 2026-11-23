extern u8 D_03002AB0[];
typedef struct 
{
  u8 pad00[0x2C];
  s8 unk2C;
  s8 unk2D;
} ScriptState;
void sub_08011D48(Entity *p);
void sub_08011D28(Entity *p);
void sub_08011DFC(Entity *p)
{
  s8 *state = (s8 *) D_03004830;
  state[0x2D] &= 0x7F;
  if (D_03002AB0[0xB8] & 4)
  {
    state[0x2D] |= ~0x7F;
  }
 do { p->unk68 += 2; } while (0);
}
