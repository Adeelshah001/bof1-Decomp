extern u8 D_03004F50[], D_03004F30[], D_03004FAF, D_03002AB0[];
u8 sub_080936F0(u8 *, u16);
u8 sub_080937EC(u8 *, u8 **);
u8 sub_08096DB0(u8 *, u8 **);
u8 sub_08096D94(void);
u8 sub_08096D88(u8 *);
void *sub_0809568C(void *, s32);

s32 sub_080936A0(u8 *actor)
{
    u8 *phase = actor + 0x4C;
    u8 savedPhase = *phase;

    if (--D_03004F50[0x4A] != 0) {
        u16 selector = 0xFFFF;
        u8 *savedField = phase;
        u8 status;
        do {
            status = sub_080936F0(actor, selector);
        } while (status == 2);

        if (status != 3) {
            *savedField = savedPhase;
            return 0;
        }
    }
    actor[0x4C] = savedPhase;
    return 1;
}

u8 sub_080936F0(u8 *actor, u16 selector)
{
    u8 *candidate;
    u16 mode = selector;
    u32 first = actor[0x70];
    u8 *state = D_03004F50;
    u8 *remaining = (u8 *)(0x4A + (u32)state);
    u8 count;
    s32 difference = *remaining;

    difference = first - difference;
    actor[0x54] = difference;
    first = state[0x58];
    if (first == 0) {
        if (sub_080937EC(actor, &candidate) == 0)
            return sub_08096D94();
        if (!(selector & 0x8000)) {
            *(u8 **)&actor[0x78] = candidate;
            *(u8 **)&state[0x54] = candidate;
        }
    } else {
        if (sub_08096DB0(actor, &candidate) == 0)
            return sub_08096D94();

        if (!(mode & 0x8000)) {
            *(u8 **)&actor[0x78] = candidate;
            *(u8 **)&state[0x54] = candidate;
            count = (u8)mode - 1;
            if (count == 0)
                goto done;
        } else {
            count = *remaining;
        }

        do {
            u8 prior = count;
            u8 index = ((vu8 *)actor)[0x70] - prior;
            candidate = (u8 *)(index * 0x124 + (u32)D_03002AB0);
            if (!(0x80 & candidate[0xF1]) && !(0x50 & candidate[0xF0]))
                goto done;
            count = prior - 1;
        } while (count != 0);
        D_03004F50[0x4A] = 1;
    }

done:
    return sub_08096D88(actor);
}

void sub_08093640(u8 *actor)
{
    u8 *state = D_03004F50;
    u8 count;
    u8 *saved;
    count = state[0x58];
    saved = state;

    if (count != 0) {
        u16 *mode = (u16 *)0x03004F30;
        if (0x8000 & mode[7]) {
            count = 1;
            goto setActor;
        } else {
            u8 *target = *(u8 **)&actor[0x78];
            u8 start = saved[0x60];
            actor[0x70] = start;
            count = start - target[0x3B];
        }
    } else {
        count = 0xF & saved[0x5F];
setActor:
        actor[0x70] = count;
    }
    saved[0x4A] = count;
}

void sub_0809352C(u8 *actor)
{
    u8 *pool = D_03003420;
    vu8 *configuration = &D_03004FAF;
    u8 *cursor = actor + 0x61;
    u8 *target;
    do {
        u8 index;
        u8 cap = *configuration;
        cap >>= 4;
        index = *cursor;
        if (index >= cap) {
            index = 0;
            *cursor = index;
        }
        ++*cursor;
        target = (u8 *)(index * 0x124 + (u32)pool);
    } while ((0x80 & target[0xF1]) || target[0xD8] > 0x5D);
    *(u8 **)&actor[0x78] = target;
    sub_0809568C(actor, 0x13);
}
