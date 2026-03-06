// 函数名称: sub_4a9730
// 虚拟地址: 0x4a9730
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4a9730(int32_t arg1)
{
    // 第一条实际指令: int32_t esi = data_642618
    int32_t esi = data_642618
    void* result = nullptr
    int32_t var_c
    char const* const ecx
    
    if (esi s<= 0)
    label_4a978f:
        char const* const var_8_2 = "UI2GetByDisplayIndex"
        var_c = 0x2367
        ecx = "Halt"
    else
        void* edx_1 = &data_63e620
        
        while (true)
            if (*edx_1 == arg1)
                result = *((result << 4) + &data_63e618)
                
                if (*(result + 0x1130) == 0)
                    if (*(result + 0x109c) == 0)
                        return result
                    
                    char const* const var_8_1 = "UI2GetByDisplayIndex"
                    var_c = 0x2362
                    ecx = "gUI2Editor.displayEls[i].el->worldInfo.index == 0"
                else
                    char const* const var_8 = "UI2GetByDisplayIndex"
                    var_c = 0x2361
                    ecx = "gUI2Editor.displayEls[i].el->clone == false"
                
                break
            
            result += 1
            edx_1 += 0x10
            
            if (result s>= esi)
                goto label_4a978f
    
    sub_489550(result, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\ui2.cpp", var_c, 
        "UI2GetByDisplayIndex")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
