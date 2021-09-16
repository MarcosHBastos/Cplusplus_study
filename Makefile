.PHONY: clean All

All:
	@echo "----------Building project:[ Sec_19_word_counter - Debug ]----------"
	@cd "Sec_19_word_counter" && "$(MAKE)" -f  "Sec_19_word_counter.mk"
clean:
	@echo "----------Cleaning project:[ Sec_19_word_counter - Debug ]----------"
	@cd "Sec_19_word_counter" && "$(MAKE)" -f  "Sec_19_word_counter.mk" clean
