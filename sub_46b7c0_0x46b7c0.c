// 函数名称: sub_46b7c0
// 虚拟地址: 0x46b7c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_46b7c0(int32_t arg1, int32_t arg2, void* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t eax = *(arg3 + 0x18)
    int32_t eax = *(arg3 + 0x18)
    int32_t edx = *(arg3 + 0x2c)
    int32_t var_20
    char const* const ecx
    int32_t ecx_1
    
    if (eax != 0xffffffff)
        if (edx s>= 0)
            if (eax s>= 0)
                ecx_1 = *(((edx + eax * 0x28) << 2) + &data_62d3a0)
            label_46b82b:
                int32_t var_1c_3 = ecx_1
                void var_18
                *arg4 = *sub_4bacb0(&var_18)
                return arg4
            
            char const* const var_1c_4 = "GetDieUI"
            var_20 = 0x99d
            ecx = "gfx.die.owner >= 0"
        else
            char const* const var_1c_2 = "GetDieUI"
            var_20 = 0x99c
            ecx = "gfx.die.cidx >= 0"
    else if (edx == eax)
        if (*(arg3 + 0x10) == 0x10)
            ecx_1 = data_62d6c0
            goto label_46b82b
        
        char const* const var_1c_1 = "GetDieUI"
        var_20 = 0x997
        ecx = "gfx.die.where == DW_DUMMY"
    else
        char const* const var_1c = "GetDieUI"
        var_20 = 0x996
        ecx = "gfx.die.cidx == -1"
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_20, 
        "GetDieUI")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
