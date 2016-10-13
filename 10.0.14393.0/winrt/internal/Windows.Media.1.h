// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Media.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Graphics.DirectX.Direct3D11.0.h"
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media {

struct __declspec(uuid("35175827-724b-4c6a-b130-f6537f9ae0d0")) __declspec(novtable) IAudioBuffer : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Capacity(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Length(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_Length(uint32_t value) = 0;
};

struct __declspec(uuid("e36ac304-aab2-4277-9ed0-43cedf8e29c6")) __declspec(novtable) IAudioFrame : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_LockBuffer(winrt::Windows::Media::AudioBufferAccessMode mode, Windows::Media::IAudioBuffer ** value) = 0;
};

struct __declspec(uuid("91a90ade-2422-40a6-b9ad-30d02404317d")) __declspec(novtable) IAudioFrameFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(uint32_t capacity, Windows::Media::IAudioFrame ** value) = 0;
};

struct __declspec(uuid("ea137efa-d852-438e-882b-c990109a78f4")) __declspec(novtable) IAutoRepeatModeChangeRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RequestedAutoRepeatMode(winrt::Windows::Media::MediaPlaybackAutoRepeatMode * value) = 0;
};

struct __declspec(uuid("cd0bc7ef-54e7-411f-9933-f0e98b0a96d2")) __declspec(novtable) IImageDisplayProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall put_Title(hstring value) = 0;
    virtual HRESULT __stdcall get_Subtitle(hstring * value) = 0;
    virtual HRESULT __stdcall put_Subtitle(hstring value) = 0;
};

struct __declspec(uuid("98f1fbe1-7a8d-42cb-b6fe-8fe698264f13")) __declspec(novtable) IMediaControl : Windows::IInspectable
{
    virtual HRESULT __stdcall add_SoundLevelChanged(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_SoundLevelChanged(event_token cookie) = 0;
    virtual HRESULT __stdcall add_PlayPressed(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_PlayPressed(event_token cookie) = 0;
    virtual HRESULT __stdcall add_PausePressed(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_PausePressed(event_token cookie) = 0;
    virtual HRESULT __stdcall add_StopPressed(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_StopPressed(event_token cookie) = 0;
    virtual HRESULT __stdcall add_PlayPauseTogglePressed(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_PlayPauseTogglePressed(event_token cookie) = 0;
    virtual HRESULT __stdcall add_RecordPressed(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_RecordPressed(event_token cookie) = 0;
    virtual HRESULT __stdcall add_NextTrackPressed(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_NextTrackPressed(event_token cookie) = 0;
    virtual HRESULT __stdcall add_PreviousTrackPressed(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_PreviousTrackPressed(event_token cookie) = 0;
    virtual HRESULT __stdcall add_FastForwardPressed(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_FastForwardPressed(event_token cookie) = 0;
    virtual HRESULT __stdcall add_RewindPressed(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_RewindPressed(event_token cookie) = 0;
    virtual HRESULT __stdcall add_ChannelUpPressed(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_ChannelUpPressed(event_token cookie) = 0;
    virtual HRESULT __stdcall add_ChannelDownPressed(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_ChannelDownPressed(event_token cookie) = 0;
    virtual HRESULT __stdcall get_SoundLevel(winrt::Windows::Media::SoundLevel * value) = 0;
    virtual HRESULT __stdcall put_TrackName(hstring value) = 0;
    virtual HRESULT __stdcall get_TrackName(hstring * value) = 0;
    virtual HRESULT __stdcall put_ArtistName(hstring value) = 0;
    virtual HRESULT __stdcall get_ArtistName(hstring * value) = 0;
    virtual HRESULT __stdcall put_IsPlaying(bool value) = 0;
    virtual HRESULT __stdcall get_IsPlaying(bool * value) = 0;
    virtual HRESULT __stdcall put_AlbumArt(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_AlbumArt(Windows::Foundation::IUriRuntimeClass ** value) = 0;
};

struct __declspec(uuid("07915118-45df-442b-8a3f-f7826a6370ab")) __declspec(novtable) IMediaExtension : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetProperties(Windows::Foundation::Collections::IPropertySet * configuration) = 0;
};

struct __declspec(uuid("4a25eaf5-242d-4dfb-97f4-69b7c42576ff")) __declspec(novtable) IMediaExtensionManager : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RegisterSchemeHandler(hstring activatableClassId, hstring scheme) = 0;
    virtual HRESULT __stdcall abi_RegisterSchemeHandlerWithSettings(hstring activatableClassId, hstring scheme, Windows::Foundation::Collections::IPropertySet * configuration) = 0;
    virtual HRESULT __stdcall abi_RegisterByteStreamHandler(hstring activatableClassId, hstring fileExtension, hstring mimeType) = 0;
    virtual HRESULT __stdcall abi_RegisterByteStreamHandlerWithSettings(hstring activatableClassId, hstring fileExtension, hstring mimeType, Windows::Foundation::Collections::IPropertySet * configuration) = 0;
    virtual HRESULT __stdcall abi_RegisterAudioDecoder(hstring activatableClassId, GUID inputSubtype, GUID outputSubtype) = 0;
    virtual HRESULT __stdcall abi_RegisterAudioDecoderWithSettings(hstring activatableClassId, GUID inputSubtype, GUID outputSubtype, Windows::Foundation::Collections::IPropertySet * configuration) = 0;
    virtual HRESULT __stdcall abi_RegisterAudioEncoder(hstring activatableClassId, GUID inputSubtype, GUID outputSubtype) = 0;
    virtual HRESULT __stdcall abi_RegisterAudioEncoderWithSettings(hstring activatableClassId, GUID inputSubtype, GUID outputSubtype, Windows::Foundation::Collections::IPropertySet * configuration) = 0;
    virtual HRESULT __stdcall abi_RegisterVideoDecoder(hstring activatableClassId, GUID inputSubtype, GUID outputSubtype) = 0;
    virtual HRESULT __stdcall abi_RegisterVideoDecoderWithSettings(hstring activatableClassId, GUID inputSubtype, GUID outputSubtype, Windows::Foundation::Collections::IPropertySet * configuration) = 0;
    virtual HRESULT __stdcall abi_RegisterVideoEncoder(hstring activatableClassId, GUID inputSubtype, GUID outputSubtype) = 0;
    virtual HRESULT __stdcall abi_RegisterVideoEncoderWithSettings(hstring activatableClassId, GUID inputSubtype, GUID outputSubtype, Windows::Foundation::Collections::IPropertySet * configuration) = 0;
};

struct __declspec(uuid("bfb52f8c-5943-47d8-8e10-05308aa5fbd0")) __declspec(novtable) IMediaFrame : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Type(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsReadOnly(bool * value) = 0;
    virtual HRESULT __stdcall put_RelativeTime(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> * value) = 0;
    virtual HRESULT __stdcall get_RelativeTime(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> ** value) = 0;
    virtual HRESULT __stdcall put_SystemRelativeTime(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> * value) = 0;
    virtual HRESULT __stdcall get_SystemRelativeTime(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> ** value) = 0;
    virtual HRESULT __stdcall put_Duration(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> * value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> ** value) = 0;
    virtual HRESULT __stdcall put_IsDiscontinuous(bool value) = 0;
    virtual HRESULT __stdcall get_IsDiscontinuous(bool * value) = 0;
    virtual HRESULT __stdcall get_ExtendedProperties(Windows::Foundation::Collections::IPropertySet ** value) = 0;
};

struct __declspec(uuid("1803def8-dca5-4b6f-9c20-e3d3c0643625")) __declspec(novtable) IMediaMarker : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Time(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_MediaMarkerType(hstring * value) = 0;
    virtual HRESULT __stdcall get_Text(hstring * value) = 0;
};

struct __declspec(uuid("bb198040-482f-4743-8832-45853821ece0")) __declspec(novtable) IMediaMarkerTypesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Bookmark(hstring * value) = 0;
};

struct __declspec(uuid("afeab189-f8dd-466e-aa10-920b52353fdf")) __declspec(novtable) IMediaMarkers : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Markers(Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker> ** value) = 0;
};

struct __declspec(uuid("eb8564ac-a351-4f4e-b4f0-9bf2408993db")) __declspec(novtable) IMediaProcessingTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Arguments(Windows::Foundation::Collections::IPropertySet ** value) = 0;
};

struct __declspec(uuid("8ed361f3-0b78-4360-bf71-0c841999ea1b")) __declspec(novtable) IMediaTimelineController : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Resume() = 0;
    virtual HRESULT __stdcall abi_Pause() = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_Position(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_ClockRate(double * value) = 0;
    virtual HRESULT __stdcall put_ClockRate(double value) = 0;
    virtual HRESULT __stdcall get_State(winrt::Windows::Media::MediaTimelineControllerState * value) = 0;
    virtual HRESULT __stdcall add_PositionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::IInspectable> * positionChangedEventHandler, event_token * eventCookie) = 0;
    virtual HRESULT __stdcall remove_PositionChanged(event_token eventCookie) = 0;
    virtual HRESULT __stdcall add_StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::IInspectable> * stateChangedEventHandler, event_token * eventCookie) = 0;
    virtual HRESULT __stdcall remove_StateChanged(event_token eventCookie) = 0;
};

struct __declspec(uuid("6bbf0c59-d0a0-4d26-92a0-f978e1d18e7b")) __declspec(novtable) IMusicDisplayProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall put_Title(hstring value) = 0;
    virtual HRESULT __stdcall get_AlbumArtist(hstring * value) = 0;
    virtual HRESULT __stdcall put_AlbumArtist(hstring value) = 0;
    virtual HRESULT __stdcall get_Artist(hstring * value) = 0;
    virtual HRESULT __stdcall put_Artist(hstring value) = 0;
};

struct __declspec(uuid("00368462-97d3-44b9-b00f-008afcefaf18")) __declspec(novtable) IMusicDisplayProperties2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AlbumTitle(hstring * value) = 0;
    virtual HRESULT __stdcall put_AlbumTitle(hstring value) = 0;
    virtual HRESULT __stdcall get_TrackNumber(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_TrackNumber(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Genres(Windows::Foundation::Collections::IVector<hstring> ** value) = 0;
};

struct __declspec(uuid("4db51ac1-0681-4e8c-9401-b8159d9eefc7")) __declspec(novtable) IMusicDisplayProperties3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AlbumTrackCount(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_AlbumTrackCount(uint32_t value) = 0;
};

struct __declspec(uuid("b4493f88-eb28-4961-9c14-335e44f3e125")) __declspec(novtable) IPlaybackPositionChangeRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RequestedPlaybackPosition(Windows::Foundation::TimeSpan * value) = 0;
};

struct __declspec(uuid("2ce2c41f-3cd6-4f77-9ba7-eb27c26a2140")) __declspec(novtable) IPlaybackRateChangeRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RequestedPlaybackRate(double * value) = 0;
};

struct __declspec(uuid("49b593fe-4fd0-4666-a314-c0e01940d302")) __declspec(novtable) IShuffleEnabledChangeRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RequestedShuffleEnabled(bool * value) = 0;
};

struct __declspec(uuid("99fa3ff4-1742-42a6-902e-087d41f965ec")) __declspec(novtable) ISystemMediaTransportControls : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PlaybackStatus(winrt::Windows::Media::MediaPlaybackStatus * value) = 0;
    virtual HRESULT __stdcall put_PlaybackStatus(winrt::Windows::Media::MediaPlaybackStatus value) = 0;
    virtual HRESULT __stdcall get_DisplayUpdater(Windows::Media::ISystemMediaTransportControlsDisplayUpdater ** value) = 0;
    virtual HRESULT __stdcall get_SoundLevel(winrt::Windows::Media::SoundLevel * value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsPlayEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsPlayEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsStopEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsStopEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsPauseEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsPauseEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsRecordEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsRecordEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsFastForwardEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsFastForwardEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsRewindEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsRewindEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsPreviousEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsPreviousEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsNextEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsNextEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsChannelUpEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsChannelUpEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsChannelDownEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsChannelDownEnabled(bool value) = 0;
    virtual HRESULT __stdcall add_ButtonPressed(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ButtonPressed(event_token token) = 0;
    virtual HRESULT __stdcall add_PropertyChanged(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PropertyChanged(event_token token) = 0;
};

struct __declspec(uuid("ea98d2f6-7f3c-4af2-a586-72889808efb1")) __declspec(novtable) ISystemMediaTransportControls2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AutoRepeatMode(winrt::Windows::Media::MediaPlaybackAutoRepeatMode * value) = 0;
    virtual HRESULT __stdcall put_AutoRepeatMode(winrt::Windows::Media::MediaPlaybackAutoRepeatMode value) = 0;
    virtual HRESULT __stdcall get_ShuffleEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_ShuffleEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_PlaybackRate(double * value) = 0;
    virtual HRESULT __stdcall put_PlaybackRate(double value) = 0;
    virtual HRESULT __stdcall abi_UpdateTimelineProperties(Windows::Media::ISystemMediaTransportControlsTimelineProperties * timelineProperties) = 0;
    virtual HRESULT __stdcall add_PlaybackPositionChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackPositionChangeRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PlaybackPositionChangeRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_PlaybackRateChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackRateChangeRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PlaybackRateChangeRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_ShuffleEnabledChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::ShuffleEnabledChangeRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ShuffleEnabledChangeRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_AutoRepeatModeChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::AutoRepeatModeChangeRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AutoRepeatModeChangeRequested(event_token token) = 0;
};

struct __declspec(uuid("b7f47116-a56f-4dc8-9e11-92031f4a87c2")) __declspec(novtable) ISystemMediaTransportControlsButtonPressedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Button(winrt::Windows::Media::SystemMediaTransportControlsButton * value) = 0;
};

struct __declspec(uuid("8abbc53e-fa55-4ecf-ad8e-c984e5dd1550")) __declspec(novtable) ISystemMediaTransportControlsDisplayUpdater : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Type(winrt::Windows::Media::MediaPlaybackType * value) = 0;
    virtual HRESULT __stdcall put_Type(winrt::Windows::Media::MediaPlaybackType value) = 0;
    virtual HRESULT __stdcall get_AppMediaId(hstring * value) = 0;
    virtual HRESULT __stdcall put_AppMediaId(hstring value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference ** value) = 0;
    virtual HRESULT __stdcall put_Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference * value) = 0;
    virtual HRESULT __stdcall get_MusicProperties(Windows::Media::IMusicDisplayProperties ** value) = 0;
    virtual HRESULT __stdcall get_VideoProperties(Windows::Media::IVideoDisplayProperties ** value) = 0;
    virtual HRESULT __stdcall get_ImageProperties(Windows::Media::IImageDisplayProperties ** value) = 0;
    virtual HRESULT __stdcall abi_CopyFromFileAsync(winrt::Windows::Media::MediaPlaybackType type, Windows::Storage::IStorageFile * source, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_ClearAll() = 0;
    virtual HRESULT __stdcall abi_Update() = 0;
};

struct __declspec(uuid("d0ca0936-339b-4cb3-8eeb-737607f56e08")) __declspec(novtable) ISystemMediaTransportControlsPropertyChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Property(winrt::Windows::Media::SystemMediaTransportControlsProperty * value) = 0;
};

struct __declspec(uuid("43ba380a-eca4-4832-91ab-d415fae484c6")) __declspec(novtable) ISystemMediaTransportControlsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::Media::ISystemMediaTransportControls ** mediaControl) = 0;
};

struct __declspec(uuid("5125316a-c3a2-475b-8507-93534dc88f15")) __declspec(novtable) ISystemMediaTransportControlsTimelineProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StartTime(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_StartTime(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_EndTime(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_EndTime(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_MinSeekTime(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_MinSeekTime(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_MaxSeekTime(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_MaxSeekTime(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_Position(Windows::Foundation::TimeSpan value) = 0;
};

struct __declspec(uuid("5609fdb1-5d2d-4872-8170-45dee5bc2f5c")) __declspec(novtable) IVideoDisplayProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall put_Title(hstring value) = 0;
    virtual HRESULT __stdcall get_Subtitle(hstring * value) = 0;
    virtual HRESULT __stdcall put_Subtitle(hstring value) = 0;
};

struct __declspec(uuid("b410e1ce-ab52-41ab-a486-cc10fab152f9")) __declspec(novtable) IVideoDisplayProperties2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Genres(Windows::Foundation::Collections::IVector<hstring> ** value) = 0;
};

struct __declspec(uuid("1fcda5e8-baf1-4521-980c-3bcebb44cf38")) __declspec(novtable) IVideoEffectsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_VideoStabilization(hstring * value) = 0;
};

struct __declspec(uuid("0cc06625-90fc-4c92-bd95-7ded21819d1c")) __declspec(novtable) IVideoFrame : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SoftwareBitmap(Windows::Graphics::Imaging::ISoftwareBitmap ** value) = 0;
    virtual HRESULT __stdcall abi_CopyToAsync(Windows::Media::IVideoFrame * frame, Windows::Foundation::IAsyncAction ** value) = 0;
    virtual HRESULT __stdcall get_Direct3DSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface ** value) = 0;
};

struct __declspec(uuid("014b6d69-2228-4c92-92ff-50c380d3e776")) __declspec(novtable) IVideoFrameFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(winrt::Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, Windows::Media::IVideoFrame ** value) = 0;
    virtual HRESULT __stdcall abi_CreateWithAlpha(winrt::Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, winrt::Windows::Graphics::Imaging::BitmapAlphaMode alpha, Windows::Media::IVideoFrame ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Media::AudioBuffer> { using default_interface = Windows::Media::IAudioBuffer; };
template <> struct traits<Windows::Media::AudioFrame> { using default_interface = Windows::Media::IAudioFrame; };
template <> struct traits<Windows::Media::AutoRepeatModeChangeRequestedEventArgs> { using default_interface = Windows::Media::IAutoRepeatModeChangeRequestedEventArgs; };
template <> struct traits<Windows::Media::ImageDisplayProperties> { using default_interface = Windows::Media::IImageDisplayProperties; };
template <> struct traits<Windows::Media::MediaExtensionManager> { using default_interface = Windows::Media::IMediaExtensionManager; };
template <> struct traits<Windows::Media::MediaProcessingTriggerDetails> { using default_interface = Windows::Media::IMediaProcessingTriggerDetails; };
template <> struct traits<Windows::Media::MediaTimelineController> { using default_interface = Windows::Media::IMediaTimelineController; };
template <> struct traits<Windows::Media::MusicDisplayProperties> { using default_interface = Windows::Media::IMusicDisplayProperties; };
template <> struct traits<Windows::Media::PlaybackPositionChangeRequestedEventArgs> { using default_interface = Windows::Media::IPlaybackPositionChangeRequestedEventArgs; };
template <> struct traits<Windows::Media::PlaybackRateChangeRequestedEventArgs> { using default_interface = Windows::Media::IPlaybackRateChangeRequestedEventArgs; };
template <> struct traits<Windows::Media::ShuffleEnabledChangeRequestedEventArgs> { using default_interface = Windows::Media::IShuffleEnabledChangeRequestedEventArgs; };
template <> struct traits<Windows::Media::SystemMediaTransportControls> { using default_interface = Windows::Media::ISystemMediaTransportControls; };
template <> struct traits<Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> { using default_interface = Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs; };
template <> struct traits<Windows::Media::SystemMediaTransportControlsDisplayUpdater> { using default_interface = Windows::Media::ISystemMediaTransportControlsDisplayUpdater; };
template <> struct traits<Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> { using default_interface = Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs; };
template <> struct traits<Windows::Media::SystemMediaTransportControlsTimelineProperties> { using default_interface = Windows::Media::ISystemMediaTransportControlsTimelineProperties; };
template <> struct traits<Windows::Media::VideoDisplayProperties> { using default_interface = Windows::Media::IVideoDisplayProperties; };
template <> struct traits<Windows::Media::VideoFrame> { using default_interface = Windows::Media::IVideoFrame; };

}

namespace Windows::Media {

template <typename T> struct impl_IAudioBuffer;
template <typename T> struct impl_IAudioFrame;
template <typename T> struct impl_IAudioFrameFactory;
template <typename T> struct impl_IAutoRepeatModeChangeRequestedEventArgs;
template <typename T> struct impl_IImageDisplayProperties;
template <typename T> struct impl_IMediaControl;
template <typename T> struct impl_IMediaExtension;
template <typename T> struct impl_IMediaExtensionManager;
template <typename T> struct impl_IMediaFrame;
template <typename T> struct impl_IMediaMarker;
template <typename T> struct impl_IMediaMarkerTypesStatics;
template <typename T> struct impl_IMediaMarkers;
template <typename T> struct impl_IMediaProcessingTriggerDetails;
template <typename T> struct impl_IMediaTimelineController;
template <typename T> struct impl_IMusicDisplayProperties;
template <typename T> struct impl_IMusicDisplayProperties2;
template <typename T> struct impl_IMusicDisplayProperties3;
template <typename T> struct impl_IPlaybackPositionChangeRequestedEventArgs;
template <typename T> struct impl_IPlaybackRateChangeRequestedEventArgs;
template <typename T> struct impl_IShuffleEnabledChangeRequestedEventArgs;
template <typename T> struct impl_ISystemMediaTransportControls;
template <typename T> struct impl_ISystemMediaTransportControls2;
template <typename T> struct impl_ISystemMediaTransportControlsButtonPressedEventArgs;
template <typename T> struct impl_ISystemMediaTransportControlsDisplayUpdater;
template <typename T> struct impl_ISystemMediaTransportControlsPropertyChangedEventArgs;
template <typename T> struct impl_ISystemMediaTransportControlsStatics;
template <typename T> struct impl_ISystemMediaTransportControlsTimelineProperties;
template <typename T> struct impl_IVideoDisplayProperties;
template <typename T> struct impl_IVideoDisplayProperties2;
template <typename T> struct impl_IVideoEffectsStatics;
template <typename T> struct impl_IVideoFrame;
template <typename T> struct impl_IVideoFrameFactory;

}

namespace impl {

template <> struct traits<Windows::Media::IAudioBuffer>
{
    using abi = ABI::Windows::Media::IAudioBuffer;
    template <typename D> using consume = Windows::Media::impl_IAudioBuffer<D>;
};

template <> struct traits<Windows::Media::IAudioFrame>
{
    using abi = ABI::Windows::Media::IAudioFrame;
    template <typename D> using consume = Windows::Media::impl_IAudioFrame<D>;
};

template <> struct traits<Windows::Media::IAudioFrameFactory>
{
    using abi = ABI::Windows::Media::IAudioFrameFactory;
    template <typename D> using consume = Windows::Media::impl_IAudioFrameFactory<D>;
};

template <> struct traits<Windows::Media::IAutoRepeatModeChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::IAutoRepeatModeChangeRequestedEventArgs;
    template <typename D> using consume = Windows::Media::impl_IAutoRepeatModeChangeRequestedEventArgs<D>;
};

template <> struct traits<Windows::Media::IImageDisplayProperties>
{
    using abi = ABI::Windows::Media::IImageDisplayProperties;
    template <typename D> using consume = Windows::Media::impl_IImageDisplayProperties<D>;
};

template <> struct traits<Windows::Media::IMediaControl>
{
    using abi = ABI::Windows::Media::IMediaControl;
    template <typename D> using consume = Windows::Media::impl_IMediaControl<D>;
};

template <> struct traits<Windows::Media::IMediaExtension>
{
    using abi = ABI::Windows::Media::IMediaExtension;
    template <typename D> using consume = Windows::Media::impl_IMediaExtension<D>;
};

template <> struct traits<Windows::Media::IMediaExtensionManager>
{
    using abi = ABI::Windows::Media::IMediaExtensionManager;
    template <typename D> using consume = Windows::Media::impl_IMediaExtensionManager<D>;
};

template <> struct traits<Windows::Media::IMediaFrame>
{
    using abi = ABI::Windows::Media::IMediaFrame;
    template <typename D> using consume = Windows::Media::impl_IMediaFrame<D>;
};

template <> struct traits<Windows::Media::IMediaMarker>
{
    using abi = ABI::Windows::Media::IMediaMarker;
    template <typename D> using consume = Windows::Media::impl_IMediaMarker<D>;
};

template <> struct traits<Windows::Media::IMediaMarkerTypesStatics>
{
    using abi = ABI::Windows::Media::IMediaMarkerTypesStatics;
    template <typename D> using consume = Windows::Media::impl_IMediaMarkerTypesStatics<D>;
};

template <> struct traits<Windows::Media::IMediaMarkers>
{
    using abi = ABI::Windows::Media::IMediaMarkers;
    template <typename D> using consume = Windows::Media::impl_IMediaMarkers<D>;
};

template <> struct traits<Windows::Media::IMediaProcessingTriggerDetails>
{
    using abi = ABI::Windows::Media::IMediaProcessingTriggerDetails;
    template <typename D> using consume = Windows::Media::impl_IMediaProcessingTriggerDetails<D>;
};

template <> struct traits<Windows::Media::IMediaTimelineController>
{
    using abi = ABI::Windows::Media::IMediaTimelineController;
    template <typename D> using consume = Windows::Media::impl_IMediaTimelineController<D>;
};

template <> struct traits<Windows::Media::IMusicDisplayProperties>
{
    using abi = ABI::Windows::Media::IMusicDisplayProperties;
    template <typename D> using consume = Windows::Media::impl_IMusicDisplayProperties<D>;
};

template <> struct traits<Windows::Media::IMusicDisplayProperties2>
{
    using abi = ABI::Windows::Media::IMusicDisplayProperties2;
    template <typename D> using consume = Windows::Media::impl_IMusicDisplayProperties2<D>;
};

template <> struct traits<Windows::Media::IMusicDisplayProperties3>
{
    using abi = ABI::Windows::Media::IMusicDisplayProperties3;
    template <typename D> using consume = Windows::Media::impl_IMusicDisplayProperties3<D>;
};

template <> struct traits<Windows::Media::IPlaybackPositionChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::IPlaybackPositionChangeRequestedEventArgs;
    template <typename D> using consume = Windows::Media::impl_IPlaybackPositionChangeRequestedEventArgs<D>;
};

template <> struct traits<Windows::Media::IPlaybackRateChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::IPlaybackRateChangeRequestedEventArgs;
    template <typename D> using consume = Windows::Media::impl_IPlaybackRateChangeRequestedEventArgs<D>;
};

template <> struct traits<Windows::Media::IShuffleEnabledChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::IShuffleEnabledChangeRequestedEventArgs;
    template <typename D> using consume = Windows::Media::impl_IShuffleEnabledChangeRequestedEventArgs<D>;
};

template <> struct traits<Windows::Media::ISystemMediaTransportControls>
{
    using abi = ABI::Windows::Media::ISystemMediaTransportControls;
    template <typename D> using consume = Windows::Media::impl_ISystemMediaTransportControls<D>;
};

template <> struct traits<Windows::Media::ISystemMediaTransportControls2>
{
    using abi = ABI::Windows::Media::ISystemMediaTransportControls2;
    template <typename D> using consume = Windows::Media::impl_ISystemMediaTransportControls2<D>;
};

template <> struct traits<Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs>
{
    using abi = ABI::Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs;
    template <typename D> using consume = Windows::Media::impl_ISystemMediaTransportControlsButtonPressedEventArgs<D>;
};

template <> struct traits<Windows::Media::ISystemMediaTransportControlsDisplayUpdater>
{
    using abi = ABI::Windows::Media::ISystemMediaTransportControlsDisplayUpdater;
    template <typename D> using consume = Windows::Media::impl_ISystemMediaTransportControlsDisplayUpdater<D>;
};

template <> struct traits<Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs>
{
    using abi = ABI::Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs;
    template <typename D> using consume = Windows::Media::impl_ISystemMediaTransportControlsPropertyChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::ISystemMediaTransportControlsStatics>
{
    using abi = ABI::Windows::Media::ISystemMediaTransportControlsStatics;
    template <typename D> using consume = Windows::Media::impl_ISystemMediaTransportControlsStatics<D>;
};

template <> struct traits<Windows::Media::ISystemMediaTransportControlsTimelineProperties>
{
    using abi = ABI::Windows::Media::ISystemMediaTransportControlsTimelineProperties;
    template <typename D> using consume = Windows::Media::impl_ISystemMediaTransportControlsTimelineProperties<D>;
};

template <> struct traits<Windows::Media::IVideoDisplayProperties>
{
    using abi = ABI::Windows::Media::IVideoDisplayProperties;
    template <typename D> using consume = Windows::Media::impl_IVideoDisplayProperties<D>;
};

template <> struct traits<Windows::Media::IVideoDisplayProperties2>
{
    using abi = ABI::Windows::Media::IVideoDisplayProperties2;
    template <typename D> using consume = Windows::Media::impl_IVideoDisplayProperties2<D>;
};

template <> struct traits<Windows::Media::IVideoEffectsStatics>
{
    using abi = ABI::Windows::Media::IVideoEffectsStatics;
    template <typename D> using consume = Windows::Media::impl_IVideoEffectsStatics<D>;
};

template <> struct traits<Windows::Media::IVideoFrame>
{
    using abi = ABI::Windows::Media::IVideoFrame;
    template <typename D> using consume = Windows::Media::impl_IVideoFrame<D>;
};

template <> struct traits<Windows::Media::IVideoFrameFactory>
{
    using abi = ABI::Windows::Media::IVideoFrameFactory;
    template <typename D> using consume = Windows::Media::impl_IVideoFrameFactory<D>;
};

template <> struct traits<Windows::Media::AudioBuffer>
{
    using abi = ABI::Windows::Media::AudioBuffer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.AudioBuffer"; }
};

template <> struct traits<Windows::Media::AudioFrame>
{
    using abi = ABI::Windows::Media::AudioFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.AudioFrame"; }
};

template <> struct traits<Windows::Media::AutoRepeatModeChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::AutoRepeatModeChangeRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.AutoRepeatModeChangeRequestedEventArgs"; }
};

template <> struct traits<Windows::Media::ImageDisplayProperties>
{
    using abi = ABI::Windows::Media::ImageDisplayProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.ImageDisplayProperties"; }
};

template <> struct traits<Windows::Media::MediaControl>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.MediaControl"; }
};

template <> struct traits<Windows::Media::MediaExtensionManager>
{
    using abi = ABI::Windows::Media::MediaExtensionManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.MediaExtensionManager"; }
};

template <> struct traits<Windows::Media::MediaMarkerTypes>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.MediaMarkerTypes"; }
};

template <> struct traits<Windows::Media::MediaProcessingTriggerDetails>
{
    using abi = ABI::Windows::Media::MediaProcessingTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.MediaProcessingTriggerDetails"; }
};

template <> struct traits<Windows::Media::MediaTimelineController>
{
    using abi = ABI::Windows::Media::MediaTimelineController;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.MediaTimelineController"; }
};

template <> struct traits<Windows::Media::MusicDisplayProperties>
{
    using abi = ABI::Windows::Media::MusicDisplayProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.MusicDisplayProperties"; }
};

template <> struct traits<Windows::Media::PlaybackPositionChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::PlaybackPositionChangeRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlaybackPositionChangeRequestedEventArgs"; }
};

template <> struct traits<Windows::Media::PlaybackRateChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::PlaybackRateChangeRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlaybackRateChangeRequestedEventArgs"; }
};

template <> struct traits<Windows::Media::ShuffleEnabledChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::ShuffleEnabledChangeRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.ShuffleEnabledChangeRequestedEventArgs"; }
};

template <> struct traits<Windows::Media::SystemMediaTransportControls>
{
    using abi = ABI::Windows::Media::SystemMediaTransportControls;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.SystemMediaTransportControls"; }
};

template <> struct traits<Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs>
{
    using abi = ABI::Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.SystemMediaTransportControlsButtonPressedEventArgs"; }
};

template <> struct traits<Windows::Media::SystemMediaTransportControlsDisplayUpdater>
{
    using abi = ABI::Windows::Media::SystemMediaTransportControlsDisplayUpdater;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.SystemMediaTransportControlsDisplayUpdater"; }
};

template <> struct traits<Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs>
{
    using abi = ABI::Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.SystemMediaTransportControlsPropertyChangedEventArgs"; }
};

template <> struct traits<Windows::Media::SystemMediaTransportControlsTimelineProperties>
{
    using abi = ABI::Windows::Media::SystemMediaTransportControlsTimelineProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.SystemMediaTransportControlsTimelineProperties"; }
};

template <> struct traits<Windows::Media::VideoDisplayProperties>
{
    using abi = ABI::Windows::Media::VideoDisplayProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.VideoDisplayProperties"; }
};

template <> struct traits<Windows::Media::VideoEffects>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.VideoEffects"; }
};

template <> struct traits<Windows::Media::VideoFrame>
{
    using abi = ABI::Windows::Media::VideoFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.VideoFrame"; }
};

}

}