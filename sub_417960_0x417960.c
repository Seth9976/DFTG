// 函数名称: sub_417960
// 虚拟地址: 0x417960
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_417960()
{
    // 第一条实际指令: int32_t eax_2 = data_1150ee8
    int32_t eax_2 = data_1150ee8
    
    if (eax_2 s< 0x20)
        *((eax_2 << 2) + &data_1150ef8) = &data_6218dc
        data_1150ee8 = eax_2 + 1
        return eax_2 + 1
    
    sub_489550(eax_2, &data_5b2591, "gAttribTableLookupCount < MAX_NUM_ATTRIB_TABLES", 
        "d:\ax\trunk\ax2017\engine\attribmapregistry.cpp", 0x23, "RegisterAttribTableBeforeMain")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
