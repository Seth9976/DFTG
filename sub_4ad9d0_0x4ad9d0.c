// 函数名称: sub_4ad9d0
// 虚拟地址: 0x4ad9d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4ad9d0(int32_t arg1)
{
    // 第一条实际指令: int32_t esi = data_642618
    int32_t esi = data_642618
    int32_t result = 0
    int32_t var_c
    char const* const ecx
    
    if (esi s<= 0)
    label_4ada11:
        char const* const var_8_1 = "GetDisplayItemIndex"
        var_c = 0x2970
        ecx = "Halt"
    else
        void* edx_1 = &data_63e618
        
        while (true)
            if (*edx_1 == arg1)
                result = *((result << 4) + &data_63e620)
                
                if (result != 0xffffffff)
                    return result
                
                char const* const var_8 = "GetDisplayItemIndex"
                var_c = 0x296b
                ecx = "gUI2Editor.displayEls[i].displayIndex != -1"
                break
            
            result += 1
            edx_1 += 0x10
            
            if (result s>= esi)
                goto label_4ada11
    
    sub_489550(result, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\ui2.cpp", var_c, 
        "GetDisplayItemIndex")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
