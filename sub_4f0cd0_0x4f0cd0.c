// 函数名称: sub_4f0cd0
// 虚拟地址: 0x4f0cd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4f0cd0(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: void* eax = sub_4f0fd0(arg3, arg4)
    void* eax = sub_4f0fd0(arg3, arg4)
    
    if (*(eax + 0x10) != 0xa)
        sub_489550(eax, &data_5b2591, "AttribTagGetDefMap(pAttribTable, tag)->defType == DT_BOOL", 
            "d:\ax\trunk\ax2017\engine\attribmap.cpp", 0x195, "AttribMapGetBool")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t edx_1 = *arg2
    int32_t ecx = 0
    
    if (edx_1 s> 0)
        int32_t* eax_1 = arg2[2]
        
        do
            if (*eax_1 == arg4)
                int32_t eax_3
                eax_3.b = eax_1[2] != 0
                return eax_3
            
            ecx += 1
            eax_1 = &eax_1[4]
        while (ecx s< edx_1)
    
    int32_t eax_2
    eax_2.b = sub_4f0c00(arg3, arg4) != 0
    return eax_2
}
