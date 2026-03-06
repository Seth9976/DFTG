// 函数名称: sub_4c3860
// 虚拟地址: 0x4c3860
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4c3860()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59fa03
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_114e81c != 0)
        sub_489550(&ExceptionList, &data_5b2591, "gTranslations == NULL", 
            "d:\ax\trunk\ax2017\engine\localization.cpp", 0x45, "LocalizationInit")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* eax_4 = sub_498440(0x128)
    eax_4[3] += 1
    int32_t* esi = *eax_4
    
    if (esi == 0)
        sub_4982d0(eax_4)
        esi = *eax_4
    
    *eax_4 = *esi
    _memset(esi, 0, 0x128)
    int32_t* var_14_1 = esi
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_28)(int32_t* arg1) = sub_4c40f0
    `eh vector constructor iterator'(esi, 0xc, 0xc, PDBStream::PDBStream)
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_28_1)(int32_t* arg1) = sub_4c40f0
    int32_t var_8_1 = 0
    int32_t result = `eh vector constructor iterator'(&esi[0x24], 0xc, 0xc, PDBStream::PDBStream)
    int32_t var_8_2 = 0xffffffff
    void* edi_1 = nullptr
    data_114e81c = esi
    uint32_t eax_7
    
    while (true)
        void* ebx_1 = edi_1 + esi
        
        if (*(edi_1 + esi) != 0)
            sub_489550(result, &data_5b2591, "mNodeBuckets == NULL", 
                "d:\ax\trunk\ax2017\engine\xmap.h", 0x72, 
                "XMap<class XString,struct Translation>::SetNumBuckets")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        eax_7 = sub_426d50(0x400)
        *ebx_1 = sub_498490(eax_7 << 2)
        *(ebx_1 + 4) = eax_7 - 1
        int32_t ebx_2 = data_114e81c
        
        if (*(ebx_2 + edi_1 + 0x90) != 0)
            break
        
        uint32_t eax_10 = sub_426d50(0x400)
        *(ebx_2 + edi_1 + 0x90) = sub_498490(eax_10 << 2)
        result = eax_10 - 1
        *(ebx_2 + edi_1 + 0x94) = result
        edi_1 += 0xc
        
        if (edi_1 s>= 0x90)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        esi = data_114e81c
    
    sub_489550(eax_7 - 1, &data_5b2591, "mNodeBuckets == NULL", "d:\ax\trunk\ax2017\engine\xmap.h", 
        0x72, "XMap<class XString,struct Translation>::SetNumBuckets")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
