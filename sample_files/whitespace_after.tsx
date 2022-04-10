const AttachmentInput: FC<AttachmentInputProps> = ({
  title,
  accept,
  setFiles,
  files,
  name,
  isInvalid,
}) => {
  return (
    <div style={STYLES.attachmentInput} data-testid="attachment-input">
      <span style={STYLES.title}>{title}</span>
      <DropZone
        accept={accept}
        onNewFiles={onNewFiles}
        multiple
        name={name}
        isInvalid={isInvalid}
      >
        <Button variant="outline-secondary" className="my-1">
          <FontAwesomeIcon
            icon={faPlus}
          />
          {" "}
          Adicionar arquivos
          {" "}

        </Button>
      </DropZone>
      {" "}
      {files.length > 0 && (
      <div data-testid="attachment-files-names">
        <div className="ml-1" style={STYLES.toBeSentLabel}>{"Arquivos a enviar: "}</div>
        {files.map((file) => (
          <Badge
            variant="secondary"
            key={file.name}
            className="mr-1 px-3"
            style={STYLES.badge}
          >
            <div style={STYLES.badgeText}>{file.name}</div>
            <FontAwesomeIcon
              icon={faTimes}
              className="ml-2"
              data-testid="attachment-files-remove"
              onClick={() => onFileRemoved(file)}
            />
          </Badge>
        ))}
      </div>
      )}
    </div>
  );
};
