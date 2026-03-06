// 函数名称: sub_4b64c0
// 虚拟地址: 0x4b64c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4b64c0(void* arg1)
{
    // 第一条实际指令: void* result = nullptr
    void* result = nullptr
    void* result_1 = data_63e5a8
    void* esi_1 = data_63e5ac * 0x1418 + result_1
    label_4b64e0:
    
    if (result != 0)
        result += 0x1418
    else
        result = result_1
    
    if (result u>= esi_1)
        return nullptr
    
    while ((*(result + 0x1410) & 0xffff0000) == 0)
        result += 0x1418
        
        if (result u>= esi_1)
            return 0
    
    int32_t edi_1 = *(result + 0x1190)
    int32_t edx_1 = 0
    
    if (edi_1 s<= 0)
        return 
    
    void* ecx = result + 0x1194
    
    while (true)
        if (*ecx == *(arg1 + 0x1410))
            if (*(result + 0xff4) != 0)
                return result
            
            break
        
        edx_1 += 1
        ecx += 4
        
        if (edx_1 s>= edi_1)
            result_1 = data_63e5a8
            goto label_4b64e0
    
    return nullptr
}
