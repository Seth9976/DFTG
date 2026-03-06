// 函数名称: sub_5233d0
// 虚拟地址: 0x5233d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_5233d0(int32_t arg1)
{
    // 第一条实际指令: if (arg1 s> 0x3e8)
    if (arg1 s> 0x3e8)
        if (arg1 == 0x3ea)
            return 8
        
        goto label_52341d
    
    if (arg1 == 0x3e8)
        return 0xc
    
    int32_t var_8
    uint32_t eax
    
    if (arg1 - 1 u> 0x71)
    label_52341d:
        char const* const var_4_1 = "TextureFormatBytesPerPixel"
        var_8 = 0x6a
    else
        eax = zx.d(*(arg1 + &jump_table_523454[5]:3))
        
        switch (eax)
            case 0
                return 4
            case 1
                return 3
            case 2
                return 2
            case 3
                return 1
            case 4
                char const* const var_4 = "TextureFormatBytesPerPixel"
                var_8 = 0x67
            case 5
                goto label_52341d
    
    sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\imageutils.cpp", var_8, 
        "TextureFormatBytesPerPixel")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
