// Copyright 2016 Daniel Schukies. All Rights Reserved.


#pragma once
#include "StomtPluginPrivatePCH.h"
#include "StomtRestRequest.h"
#include "Stomt.generated.h"

UCLASS()
class UStomt : public UObject
{
	GENERATED_BODY()

public:
	//////////////////////////////////////////////////////////////////////////
	// Construction

	UStomt();

	/** 
	* Creates new Stomt object 
	* @param target_id - Stomt target ID
	* @param positive - whether it is wish(false) or like(true)
	* @param text - Stomt content text.
	*/
	static UStomt* ConstructStomt(FString target_id, bool positive, FString text);

	//////////////////////////////////////////////////////////////////////////
	// Destruction and reset
	//TODO reset functions

	//////////////////////////////////////////////////////////////////////////
	// Data accessors

	void SetTargetID(FString target_id);
	void SetPositive(bool positive);
	void SetText(FString text);
	void SetAnonym(bool IsAnonym);

	FString GetTargetID();
	bool	GetPositive();
	FString GetText();
	bool	GetAnonym();

	//////////////////////////////////////////////////////////////////////////
	// Data

private:

	FString		target_id;
	bool		positive;
	FString		text;
	FString		url;
	bool		anonym;
	FString		img_name;
	FString		lonlat;
};
