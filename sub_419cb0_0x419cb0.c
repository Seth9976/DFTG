// 函数名称: sub_419cb0
// 虚拟地址: 0x419cb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_419cb0()
{
    // 第一条实际指令: int32_t eax_2 = data_114e868
    int32_t eax_2 = data_114e868
    
    if (eax_2 s< 0x100)
        *((eax_2 << 2) + &data_114e870) = &data_62450c
        data_114e868 = eax_2 + 1
        data_12bac28 = &data_62450c
        return eax_2 + 1
    
    sub_489550(eax_2, &data_5b2591, "gDefTypeLookupCount < MAX_NUM_DEF_TYPES", 
        "d:\ax\trunk\ax2017\engine\deftyperegistry.cpp", 0x2a, "RegisterDefMapBeforeMain")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
