// 函数名称: sub_454600
// 虚拟地址: 0x454600
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_454600(void* arg1)
{
    // 第一条实际指令: int32_t eax_5 = *(arg1 + 0x18)
    int32_t eax_5 = *(arg1 + 0x18)
    int32_t edx = *(arg1 + 0x2c)
    int32_t var_8
    char const* const ecx
    
    if (eax_5 != 0xffffffff)
        if (edx s>= 0)
            if (eax_5 s>= 0)
                return ((edx + eax_5 * 0x28) << 2) + &data_62d3a0
            
            char const* const var_4_3 = "GetDieUI"
            var_8 = 0x9ad
            ecx = "gfx.die.owner >= 0"
        else
            char const* const var_4_2 = "GetDieUI"
            var_8 = 0x9ac
            ecx = "gfx.die.cidx >= 0"
    else if (edx == eax_5)
        if (*(arg1 + 0x10) == 0x10)
            return &data_62d6c0
        
        char const* const var_4_1 = "GetDieUI"
        var_8 = 0x9a7
        ecx = "gfx.die.where == DW_DUMMY"
    else
        char const* const var_4 = "GetDieUI"
        var_8 = 0x9a6
        ecx = "gfx.die.cidx == -1"
    
    sub_489550(eax_5, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_8, 
        "GetDieUI")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
