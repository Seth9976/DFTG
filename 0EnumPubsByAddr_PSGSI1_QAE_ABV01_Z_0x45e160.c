// 函数名称: ??0EnumPubsByAddr@PSGSI1@@QAE@ABV01@@Z
// 虚拟地址: 0x45e160
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct UI2StateDeclI::VTable** __thiscall??0EnumPubsByAddr@PSGSI1@@QAE@ABV01@@Z(struct UI2StateDeclI::VTable** arg1, void* arg2)
{
    // 第一条实际指令: *arg1 = &UI2StateDeclI::`vftable'
    *arg1 = &UI2StateDeclI::`vftable'
    arg1[1] = *(arg2 + 4)
    arg1[2] = *(arg2 + 8)
    arg1[3] = *(arg2 + 0xc)
    arg1[4] = *(arg2 + 0x10)
    arg1[5] = *(arg2 + 0x14)
    *arg1 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
    arg1[6] = *(arg2 + 0x18)
    return arg1
}
