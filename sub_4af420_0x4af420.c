// 函数名称: sub_4af420
// 虚拟地址: 0x4af420
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_4af420(int32_t arg1, uint32_t* arg2, char* arg3, int32_t arg4, char* arg5)
{
    // 第一条实际指令: char* var_c = arg3
    char* var_c = arg3
    uint32_t result = sub_4a9b60(arg3, &var_c)
    
    if (result != 0)
        result = __stricmp(var_c, arg5)
        
        if (result == 0)
            uint32_t eax = *arg2
            int32_t i = 0
            *(arg4 + (eax << 2)) = arg3
            result = eax + 1
            *arg2 = result
            
            if (*(arg3 + 0x1190) s> 0)
                do
                    sub_49ea50(arg3, i)
                    result = sub_4af420(arg4, 0x400, arg5)
                    i += 1
                while (i s< *(arg3 + 0x1190))
    
    return result
}
