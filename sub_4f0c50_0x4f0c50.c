// 函数名称: sub_4f0c50
// 虚拟地址: 0x4f0c50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4f0c50(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: void* eax = sub_4f0fd0(arg3, arg4)
    void* eax = sub_4f0fd0(arg3, arg4)
    
    if (*(eax + 0x10) != 1)
        sub_489550(eax, &data_5b2591, "AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", 
            "d:\ax\trunk\ax2017\engine\attribmap.cpp", 0x177, "AttribMapGetInt")
        
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
                return eax_1[2]
            
            ecx += 1
            eax_1 = &eax_1[4]
        while (ecx s< edx_1)
    
    return sub_4f0c00(arg3, arg4) __tailcall
}
