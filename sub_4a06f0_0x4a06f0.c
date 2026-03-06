// 函数名称: sub_4a06f0
// 虚拟地址: 0x4a06f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4a06f0(int32_t arg1, uint32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: void* ebx = arg3
    void* ebx = arg3
    *(arg2 + 0xff4) = *(ebx + 0xff4)
    *(arg2 + 0xff8) = *(ebx + 0xff8)
    *(arg2 + 0xe24) = 0
    *(arg2 + 0xe28) = 0
    int32_t result = *(ebx + 0x1190)
    
    if (*(arg2 + 0x1190) s> result)
        *(arg2 + 0x1190) = result
        sub_49e910(arg2)
        result = *(ebx + 0x1190)
    
    void* ecx_2 = nullptr
    arg3 = nullptr
    
    if (result s> 0)
        do
            void* eax_2 = sub_49a970(arg2, ecx_2)
            void* eax_3 = sub_49e970(ebx, arg3)
            *(eax_2 + 0x109c) = *(arg2 + 0x109c)
            *(eax_2 + 0x1130) = 1
            sub_4a06f0(eax_3, arg4, 1)
            result = *(ebx + 0x1190)
            ecx_2 = arg3 + 1
            arg3 = ecx_2
        while (ecx_2 s< result)
    
    *(arg2 + 0x1190) = result
    
    if (*(arg2 + 0x1400) s>= result)
        return result
    
    sub_489550(result, &data_5b2591, "item.numTotalChildren >= item.numChildren", 
        "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x158f, "UI2MergeRec")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
