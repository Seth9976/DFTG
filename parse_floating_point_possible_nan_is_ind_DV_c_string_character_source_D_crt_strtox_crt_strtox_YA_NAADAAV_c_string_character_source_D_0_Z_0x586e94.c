// 函数名称: ??$parse_floating_point_possible_nan_is_ind@DV?$c_string_character_source@D@__crt_strtox@@@__crt_strtox@@YA_NAADAAV?$c_string_character_source@D@0@@Z
// 虚拟地址: 0x586e94
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*??$parse_floating_point_possible_nan_is_ind@DV?$c_string_character_source@D@__crt_strtox@@@__crt_strtox@@YA_NAADAAV?$c_string_character_source@D@0@@Z(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: char edx = 0
    char edx = 0
    int32_t edi
    int32_t var_10 = edi
    void* ecx = nullptr
    int32_t ebx
    ebx.b = *arg1
    
    while (ebx.b == *(ecx + 0x5aa858) || ebx.b == *(ecx + 0x5aa85c))
        char* eax = *arg2
        ebx.b = *eax
        ecx += 1
        *arg2 = &eax[1]
        *arg1 = ebx.b
        
        if (ecx == 4)
            edx = 1
            break
    
    void* result
    result.b = edx
    return result
}
