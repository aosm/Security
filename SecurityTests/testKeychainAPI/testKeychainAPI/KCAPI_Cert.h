// ======================================================================
//	File:		KCAPI_Cert.h
//
//	Operation classes for APIs for working with Certificates
//		- KCFindX509Certificates
//		- KCChooseCertificate
//
//
//	Copyright:	Copyright (c) 2000,2003 Apple Computer, Inc. All Rights Reserved.
//
//	Change History (most recent first):
//
//		 <1>	3/1/00	em		Created.
// ======================================================================

#ifndef __KCAPI_CERT__
#define __KCAPI_CERT__

#include "KCOperation.h"
#include "KCOperationID.h"


// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
// 	₯ COp_KCFindX509Certificates
// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
class COp_KCFindX509Certificates : public KCOperation
{
public:
OPERATION_ID(KCFindX509Certificates)

								COp_KCFindX509Certificates();
	virtual	OSStatus			Operate();

protected:
};

// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
// 	₯ COp_KCChooseCertificate
// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
class COp_KCChooseCertificate : public KCOperation
{
public:
OPERATION_ID(KCChooseCertificate)

								COp_KCChooseCertificate();
	virtual	OSStatus			Operate();

protected:
};

#endif	// __KCAPI_CERT__
