// Copyright (c) 2019 Nineva Studios

#pragma once

#include "MqttConnectionData.generated.h"

USTRUCT(BlueprintType)
struct MQTTUTILITIES_API FMqttConnectionData
{
	GENERATED_BODY()

    /** User login. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	FString Login;

    /** User password. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	FString Password;

	/** Path to the PEM encoded trusted CA certificate file */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	FString CaFile;

	/** Path to a direcotry containing the PEM encoded CA certificate files */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	FString CaPath;

	/** Path to the PEM encoded certificate file for this client */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	FString CertFile;

	/** Path to the PEM encoded private key for this client */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	FString KeyFile;
};
