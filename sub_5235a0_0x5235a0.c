// 函数名称: sub_5235a0
// 虚拟地址: 0x5235a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_5235a0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    
    if (arg4 s< 0xd || (arg4 s> 0x12 && arg4 != 0x15))
        return sub_5234e0(arg3, arg4) * arg2
    
    uint32_t eax = arg4 - 0xd
    
    if (eax u<= 8)
        eax = zx.d(lookup_table_523664[eax])
        int32_t edi
        
        switch (eax)
            case 0
                edi = 8
            label_5235e3:
                int32_t eax_2
                int32_t edx
                edx:eax_2 = sx.q(arg3 + 3)
                int32_t eax_4
                int32_t edx_2
                edx_2:eax_4 = sx.q(arg2 + 3)
                int32_t eax_7 = 0
                
                if (arg4 == 0x15)
                    eax_7 = 0x10
                
                return eax_7 + (((edx & 3) + eax_2) s>> 2) * ((eax_4 + (edx_2 & 3)) s>> 2) * edi
            case 1
                edi = 0x10
                goto label_5235e3
    
    sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\imageutils.cpp", 0x9c, 
        "TextureFormatCompressedBytesPerBlock")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
