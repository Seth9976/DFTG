// 函数名称: ??_Gtype_info@@UAEPAXI@Z
// 虚拟地址: 0x577750
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct type_info::VTable** __thiscall??_Gtype_info@@UAEPAXI@Z(struct type_info::VTable** arg1, char arg2)
{
    // 第一条实际指令: *arg1 = &type_info::`vftable'
    *arg1 = &type_info::`vftable'
    
    if ((arg2 & 1) != 0)
        operator new(arg1)
    
    return arg1
}
